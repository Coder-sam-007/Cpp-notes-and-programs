#include <iostream>
using namespace std;

class father
{
public:
  father()
  {
    cout << "you have hair like your father" << endl;
  }
};

class mother
{
public:
  mother()
  {
    cout << "you have eyes like your mother" << endl;
  }
};

class son : public father, public mother
{
public:
  son()
  {
    cout << "you have the following qualities from your parents: " << endl;
    father();
    mother();
  }
};

int main()
{
  son s1;

  return 0;
}