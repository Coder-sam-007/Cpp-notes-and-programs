#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  // A normal if else example

  int age;
  cout << "Tell me your age: ";
  cin >> age;

  if (age < 18)
  {
    cout << "You are a minor" << endl;
  }
  else if (age >= 18 && age <= 65)
  {
    cout << "You are a adult" << endl;
  }
  else if (age > 65)
  {
    cout << "You are a senior" << endl;
  }

  // A ternary operator example (if else in one line) (? :) shorthand for if else: (condition) ? (if true) : (if false)

  int time;
  cout << "Tell me the time: ";
  cin >> time;

  string result = (time < 18) ? "Good day. \n" : "Good evening. \n";
  cout << result;

  // A switch statement example

  int day;
  cout << "Tell me the day: ";
  cin >> day;

  switch (day)
  {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
  }

  /******** Loops ********/

  /*For loop in C++ */

  for (int i = 0; i < 10; i++)
  {
    cout << i << endl;
  }

  /* While loop in C++ */

  int i = 0;
  while (i < 10)
  {
    cout << i << endl;
    i++;
  }

  /* Do-while loop in C++ */

  int j = 0;
  do
  {
    cout << j << endl;
    j++;
  } while (j < 10);

  // break and continue in C++

  for (int k = 0; k < 10; k++)
  {
    if (k == 5)
    {
      break;
    }
    cout << k << endl;
  }

  int k = 0;
  while (k < 10)
  {
    if (k == 5)
    {
      k++;
      continue;
    }
    cout << k << endl;
    k++;
  }

  return 0;
}