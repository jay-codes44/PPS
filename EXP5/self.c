#include <stdio.h>
int main()
{
  int rows, cols;

  printf("Enter number of rows and columns: ");
  if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0)
  {
    printf("Invalid input.\n");
    return 1;
  }
  printf("Enter elements of the first matrix:\n");
  int first[rows][cols];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &first[i][j]);
    }
  }
  printf("Enter elements of the second matrix:\n");
    int second[rows][cols];
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        scanf("%d", &second[i][j]);
      }
    }
    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        printf("%d \t", first[i][j] + second[i][j]);
      }
      printf("\n");
    }
    return 0;
}