#include <iostream>
using namespace std;

class nums
{
public:
  int num1, num2;

  nums(int n1, int n2)
  {
    num1 = n1;
    num2 = n2;
  }
};

int average(nums pair)
{
  return (pair.num1 + pair.num2) / 2;
}

int main()
{
  nums pair1(20, 50);
  nums pair2(80, 20);

  cout << "The average of the first pair is:" << average(pair1) << endl;
  cout << "The average of the second pair is:" << average(pair2) << endl;

  return 0;
}

// 10. Data members are the variables that are declared inside a class.
// these are the building blocks of a class. without data members a class will be empty and useless

/*

 11. default constructor is a basic constructor which is called automatically when an object is created.

ex -
default {
  int a;
  string s;

public:
  default(){
  cout<<"Constructor created";
}
}


 */