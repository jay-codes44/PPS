/* Read two matrices of the same order and print their sum. */
#include <stdio.h>

int main(void)
{
	int rows, columns;

	printf("Enter the number of rows and columns: ");
	if (scanf("%d %d", &rows, &columns) != 2 || rows <= 0 || columns <= 0) {
		return 1;
	}

	int first[rows][columns];
	int second[rows][columns];

	printf("Enter the first matrix:\n");
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			scanf("%d", &first[i][j]);
		}
	}

	printf("Enter the second matrix:\n");
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			scanf("%d", &second[i][j]);
		}
	}

	printf("Sum of the matrices:\n");
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			printf("%d ", first[i][j] + second[i][j]);
		}
		printf("\n");
	}

	return 0;
}
