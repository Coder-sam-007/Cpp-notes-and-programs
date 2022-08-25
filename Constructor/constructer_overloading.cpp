#include <iostream>
using namespace std;

class sum
{
    int num1;
    int num2;

public:
    sum()
    {
        cout << "Enter a digit: ";
        cin >> num1;
        cout << "Enter another digit: ";
        cin >> num2;
        cout << "\nThe sum of the digits are: " << num1 + num2 << endl;
    }

    sum(int num1, int num2)
    {
        cout << "\n\nThe sum of the digits(by using parametrised constructer) are: " << num1 + num2 << endl;
    }

    sum(int num1, int num2, double num3)
    {
        cout << "\nThe sum of the digits (by using constructer overloading) are: " << num1 + num2 + num3 << endl;
    }
};

int main()
{
    sum s1;
    sum s2(12, 10);
    sum s3(10, 20, 10.5);

    return 0;
}