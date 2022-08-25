#include <iostream>

using namespace std;

class person
{
  string name;
  int age;

public:
  person(string n, int a)
  {
    name = n;
    age = a;
  }
  class address
  {
  public:
    string city;
    int pincode;

    address(string c, int p)
    {
      city = c;
      pincode = p;
    }
  };
  void showData(address *a)
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << a->city << endl;
    cout << "Pincode: " << a->pincode << endl;
  }
};

int main()
{

  person p1("sameer", 19);
  person ::address a1("Ooty", 6969);

  p1.showData(&a1);
}

/*

A nested class is a class which is declared in another class.

A nested class is a member and as such has the same access rights as any other member.

the members of the enclosing class can be accessed by the nested class but the members of the nested class can't be accessed directly by the enclosing class.

 */