#include <iostream>
using namespace std;
int reverseNum(int n)
{
    int rem, rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int num, reverse;
    cout << "Enter any number"
         << endl;
    cin >> num;

    reverse = reverseNum(num);

    cout << "Reverse of " << num << " is " << reverse
         << endl;
    return 0;
}