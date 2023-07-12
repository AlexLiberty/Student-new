#include "student.h"
#include <iostream>

using namespace std;

Student::Student(const string& name, int age, const string& university)
    : name(name), age(age), university(university) {}

void Student::displayInfo() const {
    cout << "Ім'я студента: " << name <<endl;
    cout << "Вік: " << age << std::endl;
    cout << "Університет: " << university <<endl;
}