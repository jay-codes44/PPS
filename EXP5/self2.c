#include <stdio.h>
int main()
{
  int n;

  printf("enter the size of square matrix: ");
  scanf("%d", &n);
  int matrix[n][n];

  printf("enter the %d elements row by row\n", n * n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }
    printf("diagonal:\n");
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == j)
          printf("%d\t", matrix[i][j]);
        else
          printf("\t");
      }
      printf("\n");


    }
      
      return 0;
    }