#include <iostream>
using namespace std;

/* Functions are aumsum they help to avoid repeatation of code.

* The values that are passed while creating a function are called parameters
* The values that are passed while calling a function are called arguemnts
*/

/*  The function prototype is the template of the function which tells the details of the function e.g(name, parameters) to the compiler. Function prototypes help us to define a function after the function call.

int sum(int a, int b); //Acceptable
int sum(int a, b); // Not Acceptable
int sum(int, int); //Acceptable

Formal Parameters:
The variables which are declared in the function are called a formal parameter.

Actual Parameters:
The values which are passed to the function are called actual parameters.

function overloading:

functions having the same name but different type arguments or different number of arguements  are known as overloaded functions.

*/

// example of function prototype
int add(int a, int b);

/* Once we provide a default value for a parameter, all subsequent parameters must also have default values. For example,

// Invalid
void add(int a, int b = 3, int c, int d);

// Invalid
void add(int a, int b = 3, int c, int d = 4);

// Valid
void add(int a, int c, int b = 3, int d = 4);

If we are defining the default arguments in the function definition instead of the function prototype, then the function must be defined before the function call.
// Invalid code

int main() {
    // function call
    display();
}

void display(char c = '*', int count = 5) {
    // code
}*/

// example of a function with a default parameter

void myFunction(int a = 10)
{
  cout << "The value of a is " << a << endl;
}

// example of overloaded functions

int add(int a, int b)
{
  return a + b;
}

double add(double a, double b)
{
  return a + b;
}

// static variable example

int staticTest()
{
  static int a = 10;
  a++;
  return a;
}
int UnstaticTest()
{
  int a = 10;
  a++;
  return a;
}

/* Inline functions:

 * Inline functions are a type of functions that are faster than normal functions.

 * In case of normal functions, the body of the function is stored in the storage device and when that particular function is called every time, then CPU has to load the body from hard disk to RAM for execution.

 * but in case of inline functions, the body of functions is copied to every context where it is used that in turn reduces the time of searching the body in the storage device or hard disk.

 * due to this reason, inline functions are much faster than normal functions.

 * Generally, inline functions are used when the body of the function is very short and it is used multiple times in the program.

 * Functions that are present inside a class are implicitly inline.

  Remember, inlining is only a request to the compiler, not a command. Compiler can ignore the request for inlining. Compiler may not perform inlining in such circumstances like:

   1) If a function contains a loop. (for, while, do-while)
   2) If a function contains static variables.
   3) If a function is recursive.
   4) If a function return type is other than void, and the return statement doesn’t exist in function body.
   5) If a function contains switch or goto statement.


 */

/* inline int add(int a, int b)
{
  return a + b;
};
 */
int main()
{

  myFunction();   // it takes the default value of 10 as argument
  myFunction(20); // it takes the value of 20 as argument

  cout << "The value of a using static variable: " << staticTest() << endl;
  cout << "The value of a using static variable: " << staticTest() << endl;

  cout << "The value of a is: " << UnstaticTest() << endl;
  cout << "The value of a is: " << UnstaticTest() << endl;

  return 0;
}

/***************  STORAGE CLASSES  ********************\
 *
 * A static local variable exists only inside a function where it is declared (similar to a local variable) but its lifetime starts when the function is called and ends only when the program ends.

  *The main difference between local variable and static variable is that, the value of static variable persists the end of the program.

 */