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

This will be same as public inheritance except that protected members are not accessible from outside the class.

By using protected, The public members of the base class become protected members in the derived class.
 */
