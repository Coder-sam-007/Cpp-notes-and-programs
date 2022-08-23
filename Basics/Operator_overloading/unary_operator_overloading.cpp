#include <iostream>
using namespace std;

class Count
{
private:
  int value;

public:
  Count() : value(0) {}

  void operator++()
  {
    ++value;
  }

  void display()
  {
    cout << "Count: " << value << endl;
  }
};

int main()
{
  Count count1;
  ++count1;

  count1.display();
  return 0;
}

/*

C++ provides a special function to change the current functionality of some operators within its class which is often called as operator overloading. when we try to change the normal functionality of an uniary operator like ++ or --, we call it uniary operator overloading.

we can overload a unary operator by creating a function inside a class by using the operator keyword and after the keyword  we can write the operator that we want to overload.

example:
  void operator++(){
  // function body
}

Things to Remember in C++ Operator Overloading

Two operators = and & are already overloaded by default in C++. For example, to copy objects of the same class, we can directly use the = operator. We do not need to create an operator function.
 */