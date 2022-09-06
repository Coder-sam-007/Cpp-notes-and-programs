#include <iostream>
using namespace std;

class car
{
private:
  string name;
  int number;

public:
  car(string name, int number)
  {
    this->name = name;
    this->number = number;
  }

  void showData()
  {
    cout << "Name: " << name << endl;
    cout << "Number: " << number << endl;
  }
};

int main()
{

  car c1("BatMobile", 6969);
  c1.showData();

  return 0;
}

/* C++ uses a unique keyword called "this" to represent an object that invokes a member function.

'this' is a pointer that points to the object for which this function was called. This unique pointer is called and it passes to the member function automatically.

The pointer this acts as an implicit argument to all the member functions. */