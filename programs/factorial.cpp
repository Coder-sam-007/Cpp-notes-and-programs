#include <iostream>
using namespace std;
// Creat a Function part
unsigned int factorial(unsigned int n){
    if (n == 0)
    
        return 1;
        return n * factorial(n-1);
    
    
}
int main()
{
    int num;
    cout << "Enter any number"
    << endl;
    cin >> num;
// Calling the function
    cout << "Factorial of " << num << " is " << factorial(num)
    << endl;
   
    return 0;
}