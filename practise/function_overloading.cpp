#include <iostream>
using namespace std;

int area(int l, int b)
{
  return l * b;
}

int area(int r)
{
  return 3.14 * r * r;
}

int main()
{
  int l, b, r;

  cout << "Enter the length and breadth of a box: ";
  cin >> l >> b;

  cout << "The area of the box is: " << area(l, b) << endl;

  cout << "Enter the radius of the circle: ";
  cin >> r;

  cout << "The area of the circle is: " << area(r) << endl;

  return 0;
}