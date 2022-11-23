#include <iostream>
using namespace std;

double area(double r)
{
  return 3.14 * r * r;
}

float area(float b, float h)
{
  return 0.5 * b * h;
}

int area(int l, int b)
{
  return l * b;
}

int main()
{
  int l, b;
  float v, h;
  double p, r;

  cout << "Enter the radius of the circle: ";
  cin >> r;
  cout << "Area of a circle is: " << area(r)
       << endl
       << endl;

  cout << "Enter the height and base of the triangle: ";
  cin >> v >> h;
  cout << "Area of a triangle is: " << area(v, h)
       << endl
       << endl;

  cout << "Enter the length and breadth of the rectangle: ";
  cin >> l >> b;
  cout << "Area of rectangle: " << area(l, b)
       << endl
       << endl;

  return 0;
}

/*

Output:

Enter the radius of the circle: 10
Area of a circle is: 314

Enter the height and base of the triangle: 10 10
Area of a triangle is: 50

Enter the length and breadth of the rectangle: 10 10
Area of rectangle: 100

 */