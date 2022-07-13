/*

===== Syntax for Declaring Variables in C++ ====

Data_type Variable_name = Value;

**************** DATA TYPES ****************

Data types define the type of data that a variable can hold; for example, an integer variable can hold integer data, a character can hold character data, etc.

Data types in C++ are categorized into three groups:

Built-in --- int, float, char, double, bool(boolean)
User-defined --- struct(structure), Union, Enum
Derived --- Arrays, Pointers, Functions

   */

#include <iostream>
using namespace std;

int a = 5, b = 10; // global variables

int sum()
{
     cout << "sum is " << a + b;

     return 0;
}
int main()
{
     int a = 10;
     float b = 15.001;
     char c = 's';
     double d = 12.93738;
     long double e = 8.29027688;
     bool f = true; // true = 1, false = 0
     string myString = "This is a string";
     char s[] = "I'm a string too"; // string in C++ is a char array

     cout << a << "\n"
          << b << "\n"
          << c << "\n"
          << d << "\n"
          << e << "\n"
          << f << "\n"
          << myString << endl
          << s << endl;

     // sum();

     float f1 = 35e3;  // e/E means exponential notation (35000)
     double d1 = 35E3; // E3 = 10*10*10 = 1000, 35e3 = 35*1000 = 35000
     cout << f1 << "\n"
          << d1 << endl;

     /**************  Refernce Variables  ****************
      *
      * Reference variables can be defined as another name for an already existing variable.
      * These are also called an alias.
      *
      * **/

     int sum = a + b;
     int &add = sum;

     cout << "sum = " << sum << "\n"
          << "add = " << add << endl;

     // *************Typecasting****************
     int num1 = 45;
     float num2 = 45.46;

     float num3 = float(num1);
     int num4 = int(num2);

     cout << int(num2) << endl;

     /* Bonus Tip

    adding strings

 */

     string s1 = "Hello";
     string s2 = "World";
     string s3 = s1 + " " + s2;
     string s4 = s1.append(" ").append(s2);
     cout << s3 << endl;
     cout << s4 << endl;

     cout << s1.length() << endl;
     cout << s1.size();

     // getline function

     string fullName;
     cout << "Type your full name: ";
     getline(cin, fullName);
     cout << "Your name is: " << fullName;

     return 0;
}
