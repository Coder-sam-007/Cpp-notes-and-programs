#include <iostream>
using namespace std;

void isPalindrome(int num)
{
  int original_num = num, remainder, reversed_num = 0;
  while (num != 0)
  {
    remainder = num % 10;
    reversed_num = reversed_num * 10 + remainder;
    num = num / 10;
  }

  if (reversed_num == original_num)
  {
    cout << "It is a palindromic number." << endl;
  }
  else
    cout << "It is not a palindromic number." << endl;
}

int main()
{
  int num;
  cout << "Enter some digits: ";
  cin >> num;

  isPalindrome(num);

  return 0;
}