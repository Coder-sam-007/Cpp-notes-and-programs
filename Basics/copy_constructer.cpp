#include <iostream>
using namespace std;

class data
{
    int data1;

public:
    data(int d)
    {
        data1 = d;
        cout << "The data is:" << data1 << endl;
    }

    data(data &data1)
    {
    }
};

int main()
{
    data data1(10);

    data data2(data1);

    return 0;
}