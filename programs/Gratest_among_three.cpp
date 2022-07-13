#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter any three number:"
    << endl;
    cin >> a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout << a <<"is greatest" << endl;
        }
    }
    if (b>a)
    {
        if (b>c)
        {
            cout << b <<"is greatest"<< b << endl;
        }
        

    }
    else
    {
        cout << c <<"is greatest" ;
    }
    
    return 0;
}