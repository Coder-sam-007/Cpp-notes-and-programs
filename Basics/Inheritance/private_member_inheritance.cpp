#include <iostream>
using namespace std;

class Important_DataBase
{
private:
  int private_data;

public:
  Important_DataBase() : private_data(69){};
  int get_data()
  {
    return private_data;
  }
};

class Public_DataBase : Important_DataBase
{
public:
  void showPrivate_Data()
  {
    cout << "The private No. is: " << get_data() << endl;
  }
};

int main()
{

  Public_DataBase p1;
  p1.showPrivate_Data();

  return 0;
}

/*

22. We can inherit private data members by creating a function which is available in the public section in that class. after doing that, we can call that function in the derived class. By these two simple process we can get access to the private members of the base class in the derived class.

In the above example we have a created a base class called "Important_DataBase". We have inherited a private data member ( i.e. private_data) from this class to another class i.e "Public_DataBase".

 */