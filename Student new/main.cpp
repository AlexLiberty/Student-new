#include "student.h"
#include "aspirant.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student student("����� �������", 20, "�����-�� ����������");
    student.displayInfo();

    cout << endl;

    Aspirant aspirant("������ ������", 25, "�����-�� ���������", "����� ��������");
    aspirant.displayInfo();
    aspirant.prepareThesis();

    return 0;
}