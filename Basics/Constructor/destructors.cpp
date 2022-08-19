#include <iostream>
using namespace std;

/* Destructor is also a special member function like constructor. Destructor destroys the class objects created by constructor.

Destructor has the same name as their class name preceded by a tiled (~) symbol.
It is not possible to define more than one destructor.

The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.

Destructor neither requires any argument nor returns any value.

It is automatically called when object goes out of scope.

Destructor release memory space occupied by the objects created by constructor.
In destructor, objects are destroyed in the reverse of an object creation.

Destructor function is automatically invoked when the objects are destroyed.
It cannot be declared static or const.

An object of a class with a Destructor cannot become a member of the union.

A destructor should be declared in the public section of the class.
The programmer cannot access the address of destructor.

  */

int count = 0;
class fruit
{
private:
  string name;

public:
  fruit(string n);
  ~fruit();
};

fruit::fruit(string n)
{
  count++;
  name = n;
  cout << "The name of the fruit with index " << count << " is: " << name << endl;
}

fruit::~fruit()
{
  cout << "Fruit with index " << count << " is destroyed" << endl;
  count--;
}

int main()
{
  fruit f1("apple");
  fruit f2("banana");
  fruit f3("lichi");

  return 0;
}

/* How are destructors different from a normal member function?

Destructors have same name as the class preceded by a tilde (~)
Destructors don’t take any argument and don’t return anything */