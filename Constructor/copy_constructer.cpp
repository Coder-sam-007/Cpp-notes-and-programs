#include <iostream>
using namespace std;

// A copy constructor is a speacial type of constructor which takes the address of an object of the same class as an arguement.

// it initialises an object using another object of the same class.

// it helps to copy datas from one object to another object

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