#include <iostream>
using namespace std;

class dataBase
{
private:
  int data;
  friend void showData(dataBase);

public:
  dataBase() : data(69){};
};

void showData(dataBase d)
{
  cout << "The data is: " << d.data << endl;
}

int main()
{
  dataBase d1;
  showData(d1);

  return 0;
}

/*

friend function is a type of function, which is used to access private and protected data members outside the class.

--> we can use create a friend function by using a friend keyword.

syntax:

class className {
    ... .. ...
    friend returnType functionName(arguments);
    ... .. ...
}

 */