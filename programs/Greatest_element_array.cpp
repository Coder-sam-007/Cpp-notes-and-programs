#include <iostream>
using namespace std;

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

  /* Greatest Number */

  int bigNum = 0;

  for (int i = 0; i < size; i++)
  {
    if (num[i] > bigNum)
    {
      bigNum = num[i];
    }
  }

  cout << endl
       << "The greatest Number of the array is: " << bigNum << endl;

    return 0;
}