#include <stdio.h>

int main()
{
  int rows, cols;

  printf("Enter number of rows and columns: ");
  if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0)
  {
    return 1;
  }

  int array[rows][cols];

  printf("Enter elements of the array:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &array[i][j]);
    }
  }

  printf("\nArray in tabular format:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d\t", array[i][j]);
    }
    printf("\n");
  }

  return 0;
}
