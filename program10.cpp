#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b) {
    return a + b;
}

template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}

int main() {
    int int1 = 5, int2 = 10, int3 = 15;
    double double1 = 2.5, double2 = 3.5, double3 = 4.5;

    cout << "Sum of two integers: " << sum(int1, int2) << endl;

    cout << "Sum of three integers: " << sum(int1, int2, int3) << endl;

    cout << "Sum of two doubles: " << sum(double1, double2) << endl;


    cout << "Sum of three doubles: " << sum(double1, double2, double3) << endl;

    return 0;
}
