#include <iostream>
using namespace std;

// A constructor is a special type of member function that is called automatically when an object is created.

// To create a constructor, use the same name as the class, followed by parentheses ():

class chocolate
{
public:
  string name;
  int price;
  int quantity;

  /* chocolate(string name, int price, int quantity)
  {
    this->name = name;
    this->price = price;
    this->quantity = quantity;
  }; */

  chocolate(string namde, int rupees, int kilo)
  {
    name = namde;
    price = rupees;
    quantity = kilo;
  }

  void display()
  {
    cout << "\nChocolate details:\n";
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
  }
};

class ice_cream
{
private:
  string name;
  int price;
  int quantity;

public:
  ice_cream(string name, int price, int quantity)
  {
    this->name = name;
    this->price = price;
    this->quantity = quantity;
  }
  void display()
  {
    cout << "\nIce-cream details:\n";
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
  }
};

void average_price(chocolate flavr1, chocolate flavr2)
{
  int avg = (flavr1.price + flavr2.price) / 2;

  cout << "\nAverage Price: "
       << avg << endl;
};

class samosa
{

public:
  int calorie;
  int price;
  int quantity;

  samosa(int cal, int rupees, int kilo)
  {
    calorie = cal;
    price = rupees;
    quantity = kilo;
  }
};

samosa display_details(samosa samosasize)
{
  cout << "\nsamosa details: \n";
  cout << "calorie: " << samosasize.calorie << endl;
  cout << "price: " << samosasize.price << endl;
  cout << "quantity: " << samosasize.quantity << endl;

  return samosasize;
}

int main()
{

  chocolate chocoOne("kinderjoy", 200, 20);
  chocoOne.display();

  chocolate chocoTwo("kitkat", 100, 30);

  // passing objects as arguements in a function

  average_price(chocoOne, chocoTwo);

  ice_cream iceOne("vanilla", 300, 30);
  iceOne.display();

  ice_cream iceTwo("strawberry", 400, 40);
  // iceTwo = iceOne; // copy constructor directly

  iceTwo.display();

  // returning object

  samosa bigsamosa(100, 50, 1);
  display_details(bigsamosa);

  return 0;
}