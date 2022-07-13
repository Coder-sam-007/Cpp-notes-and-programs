#include <iostream>
using namespace std;
inline int square(int i)
{
    return i * i;
}
inline int cube(int n)
{
    return n * n * n;
}
int main()
{
    int num;
    cout << "Enter a number:"
         << endl;
    cin >> num;
    cout << "Square of " << num << " is: " << square(num)
         << endl;
    cout << "Cube of " << num << " is: " << cube(num)
         << endl;
    return 0;
}