#include <iostream>
using namespace std;

class box
{

public:
  static int count;
  box()
  {
    count++;
  }

  static int getCount()
  {
    return count;
  }
};

int box::count = 0;

int main()
{
  box box1;
  box box2;

  cout << "Total box counted is: " << box::getCount() << endl;

  return 0;
}