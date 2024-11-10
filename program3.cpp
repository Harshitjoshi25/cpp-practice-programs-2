#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    Student(string n, int a, string dept, string crs)
        : name(n), age(a), department(dept), course(crs) {}

    friend void displayStudentDetails(const Student& student);
};

void displayStudentDetails(const Student& student) {
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    Student student("Priyanshu", 20, "Computer Science", "BSc cs");

    displayStudentDetails(student);

    return 0;
}
