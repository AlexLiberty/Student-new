#pragma once
#include "student.h"
#include <string>

using namespace std;

namespace na1
{

class Aspirant : public Student 
{
private:
    string researchTopic;

public:
    Aspirant(const string& name, int age, const string& university, const string& researchTopic);
    void displayInfo() const;
    void prepareThesis() const;
};

}