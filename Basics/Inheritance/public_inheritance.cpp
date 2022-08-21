#include <iostream>
using namespace std;

class person
{
public:
  string name;
  int age;

  person(string s, int a)
  {
    name = s;
    age = a;
  }
};

class student : public person
{
private:
  string dept;

public:
  student(string s, int a, string d) : person(s, a)
  {
    dept = d;
  }

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Department: " << dept << endl;
  }
};

int main()
{

  student s1("sameer", 69, "CS");
  s1.display();

  return 0;
}

/*

In this example, we have created a base class called Person

and a derived class called student.

we have inherited some data members like name and age from the base class.

this helps to reduce the amount of code that is written in the derived classes.

 */
