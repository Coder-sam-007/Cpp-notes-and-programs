#include <iostream>
using namespace std;

/* Note: In our range-based loop, we have used the code "const int &i" instead of int i as the range declaration. However, the "const int &i" is more preferred because:

* Using int i simply copies the array elements to the variable i during each iteration. This is not memory-efficient.

* &i, however, uses the memory address of the array elements to access their data without copying them to a new variable. This is memory-efficient.
We are simply printing the array elements, not modifying them. Therefore, we use const so as not to accidentally change the values of the array. */

template <size_t N>
void printArray(int (&a)[N])
{
  for (const int &i : a)
  {
    cout << i << " ";
  }
}

int main()
{
  int myarray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (const int &i : myarray)
  {
    cout << i << " ";
  }

  cout << endl;
  cout << endl;

  string mycars[] = {"BMW", "Audi", "Mercedes", "Ferrari"};

  for (const string &i : mycars)
  {
    cout << i << " ";
  }

  cout << endl;
  cout << endl;

  // iterating an array via function

  printArray(myarray);
  cout << endl;

  int my_array[] = {23, 42, 2, 34, 223, 34};
  printArray(my_array);

  cout << endl;
  cout << endl;

  // taking user input and displaying it
  int n;

  cout << "Enter the number of elements in the array: ";
  cin >> n;
  int The_array[n];

  for (int &i : The_array)
  {
    cout << "Enter the element: ";
    cin >> i;
  }

  cout << "The array is: ";
  for (int &i : The_array)
  {
    cout << i << " ";
  }

  return 0;
}