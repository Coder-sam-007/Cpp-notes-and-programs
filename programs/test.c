#include <stdio.h>
void reverse(int n, int *a)
{
  int i;
  printf("Reversed array is:\n");
  for (i = n - 1; i >= 0; i--)
  {
    printf("%d\n", a[i]);
  }
}
int main()
{
  int n, *a, i;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", a + i);
  }
  reverse(n, a);
  return 0;
}