#include <iostream>
using namespace std;

class count
{
public:
  int value;

  count() : value(0) {}

  void operator++()
  {
    value += 10;
  }

  void display()
  {
    cout << "value: " << value << endl;
  }
};

int main()
{

  count c1;
  ++c1;

  c1.display();

  ++c1;
  c1.display();

  return 0;
}