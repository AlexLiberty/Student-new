#include "Aspirant.h"
#include <iostream>

using namespace std;
using namespace na1;
Aspirant::Aspirant(const string& name, int age, const string& university, const string& researchTopic)
    : Student(name, age, university), researchTopic(researchTopic) {}

void Aspirant::displayInfo() const {
    cout << "��'� ��������: " << name <<endl;
    cout << "³�: " << age <<endl;
    cout << "����������: " << university <<endl;
    cout << "���� ����������: " << researchTopic <<endl;
}

void Aspirant::prepareThesis() const {
    cout << "ϳ�������� �������� ������ �� ����� ����������: " << researchTopic <<endl;
}
