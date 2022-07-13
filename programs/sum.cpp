#include <iostream>
using namespace std;

int avg(int sum,int digits){
return sum/digits;
}

int main()
{
    int n;
    int sum = 0;
    cout << "enter number of terms u want to add: "
         << endl;

    cin >> n;

    int num[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter "<<i+1 <<"th"<< " number: "
    << endl;
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }

    cout << "the sum of your inputs: " << sum
         << endl;

         cout << "the average of your input values are: "<< avg(sum,n)
         << endl;

    return 0;
}

