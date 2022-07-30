#include <iostream>
using namespace std;
int sub(int b, int a = 20)
{
     int result;
     result = b - a;
     return result;
}
int main()
{
     int a = 100;
     int b = 200;
     int result;
     result = sub(a);
     cout << "value 1: " << result << endl;
     result = sub(b);
     cout << "value 2: " << result;
     return 0;
}
