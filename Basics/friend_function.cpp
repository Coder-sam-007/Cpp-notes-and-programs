#include <iostream>
using namespace std;

class room
{
private:
  int side;
  friend int area(room);

public:
  room(int m)
  {
    side = m;
  }
};

int area(room r)
{
  return r.side * r.side;
}

int main()
{
  room r1(10);
  cout << "area: " << area(r1) << "m^2" << endl;
  return 0;
}