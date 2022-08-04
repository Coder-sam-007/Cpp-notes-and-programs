#include <iostream>
using namespace std;

/* When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration. */

int main()
{
  int a = 5;
  int b = 10;

  int sum = a + b;
  int &add = sum;

  cout << "The sum is: " << sum << endl;
  cout << "The addition is: " << add << endl;

  return 0;
}