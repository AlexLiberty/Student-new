#include "student.h"
#include "aspirant.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student student("Борис Джонсон", 20, "Сякой-то університет");
    student.displayInfo();

    cout << endl;

    Aspirant aspirant("Приємна сусідка", 25, "Такйо-то уніврситет", "всяке навчання");
    aspirant.displayInfo();
    aspirant.prepareThesis();

    return 0;
}