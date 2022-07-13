#include <stdio.h>

void display(int *str)
{
  for (int i = 0; i < 4; i++)
  {
    printf("%d ", *str);
    str = str + 1;
  }
};

int main()
{
  int numArr[4] = {23, 45, 67, 89};
  int *pointer = numArr;

  display(&numArr[0]);
  return 0;
}
