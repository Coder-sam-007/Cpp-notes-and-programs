#include <iostream>
using namespace std;

int isEven(int num)
{
  if (num % 2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }

  return 0;
}

int main()
{
  int size, num[size];
  cout << "Enter the number of elements in the array: ";
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << i + 1 << "th number: ";
    cin >> num[i];
  }

  cout << endl
       << "You have enterd the following array: " << endl;

  for (int i = 0; i < size; i++)
  {
    cout << "num[" << i + 1 << "] = " << num[i] << endl;
  }

  cout << endl
       << "The Even and Odd numbers in the array are: " << endl;

  for (int i = 0; i < size; i++)
  {
    if (isEven(num[i]) == true)
    {
      cout << "num[" << i + 1 << "] = " << num[i] << " is even." << endl;
    }
    else
    {
      cout << "num[" << i + 1 << "] = " << num[i] << " is odd." << endl;
    }
  }

  return 0;
}