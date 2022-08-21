#include <iostream>
using namespace std;

class Count
{
private:
  int value;

public:
  Count() : value(0) {}

  void operator++()
  {
    value = value + 10;
  }

  void display()
  {
    cout << "Count: " << value << endl;
  }
};

int main()
{
  Count count1;
  ++count1;

  count1.display();
  return 0;
}

/*
In C++, we can change the way operators work for user-defined types like objects and structures. This is known as operator overloading.

for example in the above code, i have used ++ operator to increment the value by 10.

In other words, we can say that operators will act as function and do what we want them to do.

+ operator can be modified to work like - operator too.
*/

/*
# We cannot use operator overloading for fundamental data types like int, float, char and so on.

Operator that cannot be overloaded are as follows:

Scope operator (::)
Sizeof
member selector(.)
member pointer selector(*)
ternary operator(?:)

 */