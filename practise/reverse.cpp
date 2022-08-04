#include <iostream>
using namespace std;

int reverse(int num)
{
  int remainder, reversed_num = 0;
  while (num != 0)
  {
    remainder = num % 10;
    reversed_num = reversed_num * 10 + remainder;
    num = num / 10;
  }

  return reversed_num;
}

int sum_of_digits(int num)
{
  int rem, sum = 0;
  while (num != 0)
  {
    rem = num % 10;
    sum = sum + rem;
    num = num / 10;
  }

  return sum;
}

int main()
{
  int num;
  cout << "Enter some digits: ";
  cin >> num;

  cout << "The reverse of " << num << " is: " << reverse(num) << endl;

  cout << "The sum of the digits that you enterd is: " << sum_of_digits(num) << endl;

  return 0;
}