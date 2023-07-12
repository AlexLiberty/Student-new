#pragma once
#include <string>

using namespace std;

class Student
{
protected:
   string name;
    int age;
   string university;

public:
    Student(const string& name, int age, const string& university);
    void displayInfo() const;
};

