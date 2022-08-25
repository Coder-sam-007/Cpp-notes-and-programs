#include <iostream>
using namespace std;
class chocolate
{
  string name;
  int *weight;
  int *price;

public:
  chocolate(string n, int w, int p)
  {
    name = n;
    weight = new int; // dynamically allocate old way
    *weight = w;
    price = new int(p); // dynamically allocate new way
  }
  void print()
  {
    cout << "Name: " << name << endl;
    cout << "Weight: " << *weight << " Gram" << endl;
    cout << "Price: " << *price << " Rupees" << endl;
  }
};

int main()
{
  chocolate c1("kitkat", 200, 20);
  c1.print();

  printf("\nBelow class is created dynamically: \n");

  chocolate *c2 = new chocolate("munch", 300, 30);
  c2->print();

  delete c2;

  return 0;
}