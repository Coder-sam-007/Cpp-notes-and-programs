#include <iostream>
using namespace std;

class person
{
protected:
  string name;
  int age;

  person(string s, int a)
  {
    name = s;
    age = a;
  }
};

class student : person // by default, it's private
{
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

  student s1("sameer", 19, "CS");
  s1.display();

  return 0;
}

/*

This will be same as public inheritance except that private members are not accessible from outside the class.

By using private, The public members of the base class become private members in the derived class.

 */