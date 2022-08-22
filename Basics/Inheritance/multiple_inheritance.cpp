#include <iostream>
using namespace std;

class father
{
public:
  void father_quality()
  {
    cout << "you have hair like your father" << endl;
  }
};

class mother
{
public:
  void mother_quality()
  {
    cout << "you have eyes like your mother" << endl;
  }
};

class son : public father, public mother
{
public:
  son()
  {
    cout << "you have the following qualities from your parents: " << endl;
    father_quality();
    mother_quality();
  }
};

int main()
{
  son s1;

  return 0;
}

/*
Multiple inheritance is a form of inheritance where a class can inherit from more than one base class.

Syntax:

class A {
... .. ...
};
class B {
... .. ...
};

class C: public A, public B {
... ... ...
};

Inheritance Chart:

father-
        \
         \
         --- son
        /
       /
mother-
 */