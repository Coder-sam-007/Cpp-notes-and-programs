#include <iostream>
using namespace std;
int Multiplication(int terms, int number){
    for (int i = 1; i <= terms; i++)
    {
        cout << number << "*" << i << "=" << number*i
        << endl;
    }
     return 0;
    
}
int main()
{
    int number, terms;
    cout << "Enter a positive integer"
    << endl;
    cin >> number;
    cout << "Enter number of terms"
    << endl;
    cin >> terms;
    Multiplication(terms, number);
    
    return 0;
}