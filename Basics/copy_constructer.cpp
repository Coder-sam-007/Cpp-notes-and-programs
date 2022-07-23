#include <iostream>
using namespace std;

class data
{
    int datas;

public:
    data(int d)
    {
        datas = d;
        cout << "The data is:" << datas << endl;
    }

    data(data &data1)
    {
        datas = data1.datas;
        cout << "The data is:" << datas << endl;
    }
};

int main()
{
    data data1(10);

    data data2(data1);

    data data3(data2);

    data data4(data3);

    return 0;
}