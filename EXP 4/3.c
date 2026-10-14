/*
PRN : 2607012272
name : jay mangukiya
batch : C3
*/
#include <stdio.h>
int main()
{

  int a[100], i, n, max, min;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter %d elements in the array: ", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  max = min = a[0];
  for (i = 1; i < n; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
    if (a[i] < min)
    {
      min = a[i];
    }
  }
printf("Maximum element: %d\n", max);
  printf("Minimum element: %d\n", min);

  return 0;
}