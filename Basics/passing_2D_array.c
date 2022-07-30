#include <stdio.h>

void display(int row, int col, int arr[][col])
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int my2D_array[][4] = {
      {2, 3, 4, 5},
      {8, 9, 4, 1},
      {6, 3, 0, 5},
  };

  display(3, 4, my2D_array);

  return 0;
}