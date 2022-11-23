#include <iostream>
using namespace std;

class father
{
public:
  void father_quality()
  {
    cout << "Blonde hair" << endl;
  }
};

class mother
{
public:
  void mother_quality()
  {
    cout << "Hypnotic eyes" << endl;
  }
};

class son : public father, public mother
{
public:
  son()
  {
    cout << "you have the following qualities from your parents: "
         << endl;
    father_quality();
    mother_quality();
  }
};

int main()
{
  son s1;

  return 0;
}

/*

Output:

you have the following qualities from your parents:
Blonde hair
Hypnotic eyes

 */