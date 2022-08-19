#include <iostream>
using namespace std;

class person
{
protected: // helps to access the data members of the class in other derived classes
  string name;
  int age;

public:
  person(string s, int a)
  {
    name = s;
    age = a;
  }
};

class student : public person // Derived Class
{
private:
  int id;
  string dept;

public:
  student(string s, int a, int i, string d) : person(s, a)
  {
    id = i;
    dept = d;
  }

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "ID: " << id << endl;
    cout << "Department: " << dept << endl;
  }
};

class employee : public person // Derived Class
{
private:
  string desig;
  int salary;

public:
  employee(string s, int a, string d, int sal) : person(s, a)
  {
    desig = d;
    salary = sal;
  }
  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Designation: " << desig << endl;
    cout << "Salary: " << salary << endl;
  }
};

int main()
{

  student s1("sameer", 19, 69, "CS");
  s1.display();

  cout << "\n";

  employee e1("The Zain", 22, "Web3 front-end Dev", 100000);
  e1.display();

  return 0;
}

/*
In this example, we have created a base class called Person

and 2 derived classes called student and employee.

we have inherited some data members like name and age from the base class.

this helps to reduce the amount of code that is written in the derived classes.

i have used protected to access the data members of the base class in the derived classes. we can do public as well but it is not recommended because then it can be accessed from any where in the code.
 */
