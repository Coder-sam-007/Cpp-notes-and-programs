#include <iostream>
using namespace std;
int area(int l, int b)
{
    return l * b;
}
float area(float b, float h)
{
    return 0.5 * b * h;
}
double area(double r)
{
    return 3.14 * r * r;
}
int main()
{
    int l, b;
    float v, h;
    double p, r;
    cout << "Enter the length and breadth of the rectangle:"
         << endl;
    cin >> l >> b;
    cout << "Area of rectangle:" << area(l, b)
         << endl;
    cout << "Enter the height and base of the triangle:"
         << endl;
    cin >> v >> h;
    cout << "Area of a triangle is:" << area(v, h)
         << endl;
    cout << "Enter the radius of the circle:"
         << endl;
    cin >> r;
    cout << "Area of a circle is:" << area(r)
         << endl;
    return 0;
}