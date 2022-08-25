#include <iostream>
using namespace std;

class grandparent
{
protected:
  string name;
  int age;

  grandparent(string s, int a)
  {
    name = s;
    age = a;
  }
};

class parent : public grandparent
{
protected:
  int no_of_cousins;

  parent(string s, int a, int n) : grandparent(s, a)
  {
    no_of_cousins = n;
  }
};

class child : public parent
{
  string fav_toy;

public:
  child(string s, int a, int n, string t) : parent(s, a, n)
  {
    fav_toy = t;
  }

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "No of cousins: " << no_of_cousins << endl;
    cout << "Favourite toy: " << fav_toy << endl;
  }
};
int main()
{
  child c1("sameer", 19, 2, "gun");
  c1.display();
  return 0;
}

/*
In C++ programming, not only you can derive a class from the base class but you can also derive a class from the derived class. This form of inheritance is known as multilevel inheritance.

Syntax:

class A {
... .. ...
};
class B: public A {
... .. ...
};
class C: public B {
... ... ...
};

inheritance chart:

grandparent --> parent --> child

name&age --> name&age + no_of_cousins --> name&age + no_of_cousins + fav_toy
 */