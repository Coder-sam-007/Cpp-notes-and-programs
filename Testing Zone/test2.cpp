#include <iostream>
using namespace std;

class food
{
private:
     string name;
     int price;

public:
     food(string n, int p)
     {
          name = n;
          price = p;
     }

     void print()
     {
          cout << "Name: " << name << endl;
          cout << "Price: " << price << endl
               << endl;
     }
};

int main()
{
     food f[5] = {food("pizza", 100),
                  food("burger", 200),
                  food("sandwich", 300),
                  food("pasta", 400),
                  food("cake", 500)};

     for (int i = 0; i < 5; i++)
     {
          f[i].print();
     }

     return 0;
}