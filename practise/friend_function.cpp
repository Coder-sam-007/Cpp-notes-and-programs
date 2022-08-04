#include <iostream>
using namespace std;

class veggie
{
private:
  string name;
  int weight;
  int price;

public:
  veggie(string n, int w, int p);

  friend void print(veggie);
};

veggie::veggie(string n, int w, int p)
{
  name = n;
  weight = w;
  price = p;
};

void print(veggie v1)
{
  cout << "name: " << v1.name << endl;
  cout << "weight: " << v1.weight << endl;
  cout << "price: " << v1.price << endl;
  cout << "\n"
       << endl;
}

int main()
{
  veggie v1("paneer", 12, 57);
  veggie v2("mushroom", 15, 127);
  veggie v3("jamoon", 19, 67);

  print(v1);
  print(v2);
  print(v3);

  return 0;
}