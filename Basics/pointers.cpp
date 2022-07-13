#include <iostream>
using namespace std;

/*

                  & = address of
                  * = value at the address of

                  int* pointVar; // preferred syntax

                  When * is used with pointers, it's called the dereference operator.

                  Note: In C++, pointVar and *pointVar is completely different. We cannot do something like *pointVar = &var;

 */

// passing an array to a function using pointer

void display(string *x, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << *(x + i) << endl;
  }
};

void displayPointer(string *x, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Value at address " << x + i << " is " << *(x + i) << endl;
  }
};

// displaying the value of the array without creating a pointer variable
void displayArr(int arr[])
{
  for (int i = 0; i < 5; i++)
  {
    cout << *(arr + i) << endl;
  }
}

int main()
{
  int num = 100;
  int *numAddress = &num;

  // pointers are simple variables that store the address of another variable.
  // The value of a pointer is the address of the variable it points to.

  cout << "num: " << num << endl;
  cout << "&num: " << &num << endl;
  cout << "numAddress: " << numAddress << endl;

  // by using the address of the variable, we can access the value of the variable it points to.

  cout << "*numAddress: " << *numAddress << endl;

  // modifying the value of the variable by using the address of the variable(by using pointers)

  *numAddress = 200;
  cout << "num: " << num << endl;

  // pointer to pointer
  int a = 3;
  int *b = &a;
  int **c = &b;

  cout << "c: " << c << endl;
  cout << "&b: " << &b << endl;

  cout << "*c: " << *c << endl;
  cout << "b: " << b << endl;

  cout << "**c: " << **c << endl;
  cout << "a: " << a << endl;

  /*arrays and pointers:

   Storing the address of an array into pointer is different than storing the address of a variable into the pointer because the name of the array is an address of the first index of an array. So to use ampersand "&" with the array name for assigning the address to a pointer is wrong.

           &Marks --> Wrong
           Marks --> address of the first block
 */

  string cars[] = {"BMW", "Audi", "Mercedes", "Ferrari"};
  string *pointer = cars;

  // passing an array to a function using pointer

  display(cars, 4);
  displayPointer(cars, 4);
  // display(cars, 4) = display(&cars[0], 4)
  // cars = &cars[0]

  // displaying the value of the array without creating a pointer variable

  int my_array[] = {1, 2, 3, 4, 5};
  displayArr(my_array);

  // pointer arithmatic

  cout << "\nvalue of pointer: " << pointer << endl;
  cout << "value of *pointer: " << *pointer << endl;
  cout << "value of pointer + 1: " << pointer + 1 << endl;
  cout << "value of *(pointer + 1): " << *(pointer + 1) << endl;
  cout << "value of pointer + 2: " << pointer + 2 << endl;
  cout << "value of *(pointer + 2): " << *(pointer + 2) << endl;
  cout << "value of pointer + 3: " << pointer + 3 << endl;
  cout << "value of *(pointer + 3): " << *(pointer + 3) << endl;

  return 0;
}