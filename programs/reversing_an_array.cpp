#include <iostream>
using namespace std;

int main()
{

  int size;

  cout << "Enter the number of elements in the array: ";
  cin >> size;

  int arr[size];

  for (int i = 0; i < size; i++)
  {
    cout << "Enter the " << i + 1 << " element: ";
    cin >> arr[i];
  }

  cout << endl
       << "You have entered the following Array: " << endl;

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl
       << endl
       << "The reversed version of the array is: " << endl;

  int j, temp;

  for (int i = 0, j = size - 1; i < size / 2; i++, j--)
  {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}