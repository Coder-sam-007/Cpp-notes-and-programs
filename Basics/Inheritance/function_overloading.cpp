#include <iostream>
using namespace std;

class food
{
protected:
  int quantity;
  int calories;

public:
  food(int q, int a)
  {
    quantity = q;
    calories = a;
  }

  void display()
  {
    cout << "\nDisplaying data from base class:"
         << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Calories: " << calories << endl;
  }
};

class veg : public food
{
private:
  string name;
  int price;

public:
  veg(string n, int p, int q, int a) : food(q, a)
  {
    name = n;
    price = p;
  }
  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Calories: " << calories << endl;
  }
};

int main()
{
  veg v1("Carrot", 15, 20, 100);
  v1.display();

  v1.food::display(); // accessing over-ride function from base class

  return 0;
}

/*
Suppose, the same function is defined in both the derived class and the based class. Now if we call this function using the object of the derived class, the function of the derived class is executed.

This is known as function overriding in C++. The function in derived class overrides the function in base class.
 */