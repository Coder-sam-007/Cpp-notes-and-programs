#include <iostream>
using namespace std;

int reverse(int num)
{
  int reversedNum = 0, rem;

  while (num != 0)
  {
    rem = num % 10;
    reversedNum = reversedNum * 10 + rem;
    num = num / 10;
  }
  return reversedNum;
};

int sum_of_digits(int num)
{
  int rem, sum = 0;
  while (num > 0)
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
  cout << "Give a number: ";
  cin >> num;
  cout << "The reverse of " << num << " is: " << reverse(num) << endl;

  cout << "The sum of the digits are: " << sum_of_digits(num) << endl;

  return 0;
}