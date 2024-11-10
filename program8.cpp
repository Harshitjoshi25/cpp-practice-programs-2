#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:

    Number(int val) : a(val) {}

    
    void operator++() {
        a += 5;
    }

    
    void operator--() {
        a -= 1;
    }

    
    void operator-() {
        a = -a;
    }

    
    friend void incrementBy5(Number &num);

    friend void decrementBy1(Number &num);

    friend void negateValue(Number &num);

   
    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

void incrementBy5(Number &num) {
    num.a += 5;
}


void decrementBy1(Number &num) {
    num.a -= 1;
}


void negateValue(Number &num) {
    num.a = -num.a;
}

int main() {
    Number num(10);

    cout << "Initial ";
    num.display();

    ++num;  // Increment by 5
    cout << "After incrementing by 5 (member function): ";
    num.display();

    --num;  // Decrement by 1
    cout << "After decrementing by 1 (member function): ";
    num.display();

    -num;  // Negate the value
    cout << "After negating (member function): ";
    num.display();

    incrementBy5(num);
    cout << "After incrementing by 5 (friend function): ";
    num.display();

    decrementBy1(num);
    cout << "After decrementing by 1 (friend function): ";
    num.display();

    negateValue(num);
    cout << "After negating (friend function): ";
    num.display();

    return 0;
}
