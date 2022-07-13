#include <iostream>
using namespace std;
    void palindrome(int num){
        int reverse, value=0;
        value = num;
        while (num > 0)
        {
            reverse = reverse * 10 + num % 10;
            num = num / 10;
        }
        if (value == reverse)
        {
            cout << value << " is a palindrome"
            << endl;

        }
        else
        {
            cout << value << " is not a palindrome"
            << endl;
        }
        
        
    }
int main()
{
    int n;
    cout << "Enter a number"
    << endl;
    cin >> n;
    palindrome(n);
    return 0;
}