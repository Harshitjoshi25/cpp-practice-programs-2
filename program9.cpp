#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:

    Number(int val = 0) : value(val) {}

    Number operator+(const Number &other) const {
        return Number(value + other.value);
    }

    Number operator-(const Number &other) const {
        return Number(value - other.value);
    }

    friend Number operator+(const Number &num1, const Number &num2);

    friend Number operator-(const Number &num1, const Number &num2);

    void display() const {
        cout << "Value: " << value << endl;
    }
};

Number operator+(const Number &num1, const Number &num2) {
    return Number(num1.value + num2.value);
}

Number operator-(const Number &num1, const Number &num2) {
    return Number(num1.value - num2.value);
}

int main() {
    Number num1(10), num2(5);

    Number sumMember = num1 + num2;     
    Number diffMember = num1 - num2;     

    cout << "Using member function overloads:" << endl;
    cout << "Sum: ";
    sumMember.display();
    cout << "Difference: ";
    diffMember.display();

    // Using friend function overloads
    Number sumFriend = operator+(num1, num2);    // Sum using friend function
    Number diffFriend = operator-(num1, num2);   // Difference using friend function

    cout << "\nUsing friend function overloads:" << endl;
    cout << "Sum: ";
    sumFriend.display();
    cout << "Difference: ";
    diffFriend.display();

    return 0;
}
