#include <iostream>
using namespace std;

// A copy constructor is a speacial type of constructor which takes the address of an object of the same class as an arguement.

// it initialises an object using another object of the same class.

// it helps to copy datas from one object to another object

class data
{
private:
  int data1;

public:
  data(int n)
  {
    data1 = n;
    cout << "The data is: " << data1 << endl;
  }

  data(data &datas)
  {
    data1 = datas.data1;
    cout << "The data is: " << data1 << endl;
  }
};

int main()
{
  data dataOne(12);
  data dataTwo(dataOne);
  data dataThree(dataTwo);
  data dataFour(dataThree);
  data dataFive(dataFour);
  return 0;
}