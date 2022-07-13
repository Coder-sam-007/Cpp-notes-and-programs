/************ Operators in C++ ************
 *
 * Arithmetic Operators = +, -, *, /, %
 * Assignment Operators = =, +=, -=, *=, /=, %=
 * Relational Operators = <, >, <=, >=, ==, !=
 * Logical Operators = &&, ||, !
 * Bitwise Operators = &, |, ^, ~, <<, >>
 *
 * Scope resolution operator = ::
 * it helps to access the members of a class or a namespace and to access global variables.
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;
float PI = 3.14;

int area_of_circle(int radius)
{
    int area = PI * radius * radius;
    return area;
}
int main()
{
    int x = 5;
    int y = 3;
    cout << (!(x > 3 && x < 10)); // returns false (0) because ! (not) is used to reverse the result

    float PI = float(22 / 7);

    cout << PI
         << endl
         << ::PI;

    // Manipulators in C++
    float a = 3, b = 78, c = 1233;

    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;

    cout << "The value of a is: " << setw(4) << a << endl;
    cout << "The value of b is: " << setw(4) << b << endl;
    cout << "The value of c is: " << setw(4) << c << endl;

    // operator precedence

//https://en.cppreference.com/w/cpp/language/operator_precedence

    return 0;
}