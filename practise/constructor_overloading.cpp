#include <iostream>
using namespace std;

class sum
{
private:
  int num1;
  int num2;
  double num3;
  double num4;

public:
  sum(int n1, int n2)
  {
    num1 = n1;
    num2 = n2;

    cout << "the sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
  }
  sum(double n1, double n2)
  {
    num3 = n1;
    num4 = n2;

    cout << "the sum of " << num3 << " and " << num4 << " is: " << num3 + num4 << endl;
  }
};

int main()
{
  sum pair1(12, 21);
  sum pair2(10.5, 10.5);

  return 0;
}