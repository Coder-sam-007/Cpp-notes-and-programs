#include <iostream>
using namespace std;
class Employee
{
    string Name;
    int age;
    int salary;

public:
    void insertData();
    void displayData();
};
void Employee::insertData()
{
    cout << "Enter employee's name:"
         << endl;
    cin >> Name;
    cout << "Enter age:"
         << endl;
    cin >> age;
    cout << "Enter salary:"
         << endl;
    cin >> salary;
}
void Employee::displayData()
{
    cout << "\n"
         << endl;
    cout << "Employee's Data:-"
         << endl;

    cout << "Name:" << Name << endl;
    cout << "age.:" << age << endl;
    cout << "Salary:" << salary << endl;
}
int main()
{
    Employee Emp[2];

    for (int i = 0; i < 2; i++)
    {
        Emp[i].insertData();
    }

    for (int i = 0; i < 2; i++)
    {
        Emp[i].displayData();
    }
    return 0;
}