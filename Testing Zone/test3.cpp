#include <iostream>
using namespace std;

class geeks
{
  int *p;

public:
  // default constructor
  geeks()
  {

    // allocating memory at run time
    p = new int;
    *p = 0;
  }

  // parameterized constructor
  geeks(int x)
  {
    p = new int;
    *p = x;
  }
  void display()
  {
    cout << *p << endl;
  }
};

int main()
{

  // default constructor would be called
  geeks obj1 = geeks();
  obj1.display();

  // parameterized constructor would be called
  geeks obj2 = geeks(7);
  obj2.display();
}
