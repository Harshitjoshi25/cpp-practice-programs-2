#include <iostream>
using namespace std;

class Base {
public:
    
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return a + b + c + 10;  
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base *basePtr = &derivedObj;

    cout << "Sum using base class object: " << baseObj.sum(10, 20, 30) << endl;

    cout << "Sum using derived class object: " << derivedObj.sum(10, 20, 30) << endl;

    
    cout << "Sum using base class pointer to derived object: " << basePtr->sum(10, 20, 30) << endl;

    return 0;
}
