#include <iostream>
using namespace std;

/* Unions are similar to structures but they provide better memory management then structures.  Unions use shared memory so only 1 variable can be used at a time.

  * We can only use 1 variable at a time otherwise the compiler will give us a garbage value.


  * The compiler chooses the data type which has maximum memory for the allocation.

    */

union marks
{
  int maths;
  int english;
  char grade;
};

int main()
{

  marks m1;
  m1.maths = 34;
  m1.english = 45;
  m1.grade = 'A';

  cout << m1.maths << endl;
  cout << m1.english << endl;
  cout << m1.grade << endl;

  // enums are used to define a set of named constants.
  // Enums are user-defined types that consist of named integral constants.

  enum week
  {
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,
    Sun
  };

  week today;
  today = Sun;
  cout << "Day " << today + 1;

  // Changing Default Value of Enums

  enum marks
  {
    maths = 34,
    english = 45,
    science = 56
  };

  cout << "\nyour marks are: \n\n";

  cout << "English marks: " << english << endl;
  cout << "Maths marks: " << maths << endl;
  cout << "Science marks: " << science << endl;

  return 0;
}
