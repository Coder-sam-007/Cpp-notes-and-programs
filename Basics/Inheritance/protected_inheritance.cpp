#include <iostream>
using namespace std;

class person
{
protected:
  string name;
  int age;

public:
  person(string s, int a)
  {
    name = s;
    age = a;
  }
};

class student : protected person
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

class employee : protected person
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

This will be same as public inheritance except that protected members are not accessible from outside the class.

By using protected, The public members of the base class become protected members in the derived class.
 */
