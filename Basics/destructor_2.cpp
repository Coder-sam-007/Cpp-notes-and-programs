#include <iostream>
using namespace std;
/*
The thing is to be noted here, if the object is created by using new or the constructor uses new to allocate memory which resides in the heap memory or the free store, the destructor should use delete to free the memory.
 */

class grocery
{
private:
  string *itemName;
  int *quantity;

public:
  grocery(string n, int q);
  ~grocery();
};

grocery::grocery(string n, int q)
{
  itemName = new string(n);
  quantity = new int(q);

  cout << "\nitemName = " << *itemName << endl;
  cout << "quantity = " << *quantity << endl;
}

grocery::~grocery()
{
  delete itemName;
  delete quantity;

  cout << "grocery object destroyed" << endl;
}

int main()
{
  grocery *g1 = new grocery("veggies", 10);
  delete g1;
  grocery *g2 = new grocery("pulses", 100);
  delete g2;

  return 0;
}