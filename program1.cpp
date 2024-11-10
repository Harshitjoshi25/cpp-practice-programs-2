#include <iostream>
using namespace std;

class Student {
public:
    inline void displaySum(int a, int b) {
        cout << "The sum is: " << (a + b) << endl;
    }
};

int main() {
    Student student;
    student.displaySum(5, 10);
    return 0;
}
