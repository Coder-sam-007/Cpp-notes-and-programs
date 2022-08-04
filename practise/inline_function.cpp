#include <iostream>
using namespace std;

inline int sum(int num1, int num2)
{
  return num1 + num2;
}

int main()
{
  int num1, num2;
  cout << "Enter a number: ";
  cin >> num1;

  cout << "Enter another number: ";
  cin >> num2;

  cout << "Their summation is:" << sum(num1, num2);

  return 0;
}