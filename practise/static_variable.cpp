#include <iostream>
using namespace std;

class apple
{
public:
  static int count;

  apple()
  {
    count++;
  };
};

int apple::count = 0;

int main()
{
  apple obj1;
  cout << "Total no. of apple collected till now is: " << obj1.count << endl;
  apple obj2;
  cout << "Total no. of apple collected till now is: " << obj2.count << endl;

  apple obj3;
  apple obj4;
  cout << "Total no. of apple collected till now is: " << apple::count << endl;
}
