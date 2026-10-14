 #include <stdio.h>

int main(void)
{
	int n;

	printf("Enter the size of the square matrix: ");
	scanf("%d", &n);
	int matrix[n][n];

	printf("Enter %d elements row by row:\n", n * n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("Matrix:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	printf("Main diagonal: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", matrix[i][i]);
	}
	printf("\n");

	return 0;
}
