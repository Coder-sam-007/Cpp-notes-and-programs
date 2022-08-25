#include <iostream>
using namespace std;
class abstract
{
public:
  virtual void pure() = 0; // Pure Virtual Function
};

class derived : public abstract
{
public:
  void pure()
  {
    cout << "Virtual Function in Derived class\n";
  }
};

int main()
{
  abstract *obj;
  derived d_obj;
  obj = &d_obj;
  obj->pure();
}

/*
A pure virtual function (or abstract function) in C++ is a virtual function for which we don’t have an implementation in the base class, we only declare it. but we can use it in the derived class. A pure virtual function is declared by assigning 0 in the declaration.

--> A pure virtual function doesn't have the function body and it must end with = 0.

syntax:

class className
{
  // Data members of class
public:

  virtual void functionName() = 0;

  // Other members
};

Pure virtual functions are used if :
--> if a function doesn't have any use in the base class
--> but the function must be implemented by all its derived classes
*/

/* Abstract Class

A class that contains a pure virtual function is known as an abstract class. In the above example, the class abstract is an abstract class.

We cannot create objects of an abstract class. However, we can derive classes from them, and use their data members and member functions (except pure virtual functions).

When we create a pure virtual function in Abstract class, we reserve a slot for a function in the VTABLE, but doesn't put any address in that slot. Hence the VTABLE will be incomplete.

As the VTABLE for Abstract class is incomplete, hence the compiler will not let the creation of object for such class and will display an errror message whenever you try to do so.

 */