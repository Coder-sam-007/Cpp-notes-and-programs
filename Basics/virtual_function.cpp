#include <iostream>
using namespace std;

class Base
{
public:
  virtual void print()
  {
    cout << "Base Function" << endl;
  }
};

class Derived : public Base
{
public:
  void print()
  {
    cout << "Derived Function" << endl;
  }
};

int main()
{
  Derived derived1;

  Base *base1 = &derived1;

  base1->print();

  return 0;
}

/*

                               Defination and stuff

A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.

Basically, a virtual function is used in the base class in order to ensure that the function is overridden.

syntax:

class className {
    public:
    ... .. ...
    virtual returnType functionName(arguments);
}

*/

/*

Rules for virtual functions:

1. Virtual functions cannot be static.

2. A virtual function can be a friend function of another class.

3. Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.

4. The prototype of virtual functions should be the same in the base as well as derived class.

5. They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.

6. A class may have virtual destructor but it cannot have a virtual constructor.

 */

/* Limitations of Virtual functions:

Slower: The function call takes slightly longer due to the virtual mechanism and makes it more difficult for the compiler to optimize because it does not know exactly which function is going to be called at compile time.

Difficult to Debug: In a complex system, virtual functions can make it a little more difficult to figure out where a function is being called from.

 */