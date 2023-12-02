#include <iostream>
// #include<conio.h>
using namespace std;
class basic
{
protected:
    char name[20];
    int empid;
    char gender[10];

public:
    void getBasicInfo(void)
    {
        cout << "Enter Your Name: ";
        cin.getline(name, 20);
        cout << "Enter Your Employee ID: ";
        cin >> empid;
        cout << "Enter Your Gender: ";
        cin >> gender;
    }
};
class dept
{
protected:
    char deptname[20];
    char assignwork[20];
    int time;
};
class employee : private basic, private dept
{
public:
    void getEmployeeInfo(void)
    {
        cout << "Enter employee's basic info: " << endl;
        getBasicInfo();
        cout << "Enter employee's department info: " << endl;
    }
    void printEmployeeInfo(void)
    {
        cout << "***** Basic Information of Employee *****" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empid << endl;
        cout << "Gender: " << gender << endl;
    }
};
int main()
{
    employee emp;
    emp.getEmployeeInfo();
    emp.printEmployeeInfo();
    return 0;
    //   getch();
}