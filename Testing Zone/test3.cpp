#include <iostream>
using namespace std;

void calc(int x);

int main()
{
  int x = 10;
  calc(x);
  printf("%d", x);
  return 0;
}

void calc(int x)
{
  x = x + 10;
}