#include "Aspirant.h"
#include <iostream>

using namespace std;
using namespace na1;
Aspirant::Aspirant(const string& name, int age, const string& university, const string& researchTopic)
    : Student(name, age, university), researchTopic(researchTopic) {}

void Aspirant::displayInfo() const {
    cout << "Ім'я аспіранта: " << name <<endl;
    cout << "Вік: " << age <<endl;
    cout << "Університет: " << university <<endl;
    cout << "Тема дослідження: " << researchTopic <<endl;
}

void Aspirant::prepareThesis() const {
    cout << "Підготовка дипломної роботи за темою дослідження: " << researchTopic <<endl;
}
