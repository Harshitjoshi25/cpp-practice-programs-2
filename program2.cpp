#include <iostream>
using namespace std;

class Number;

class PrimeChecker {
public:
    bool isPrime(const Number& num);
};

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    friend class PrimeChecker;
};

bool PrimeChecker::isPrime(const Number& num) {
    if (num.value <= 1)
        return false;
    for (int i = 2; i * i <= num.value; i++) {
        if (num.value % i == 0)
            return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Number num(number);
    PrimeChecker checker;

    if (checker.isPrime(num)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
