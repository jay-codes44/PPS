#include <stdio.h>

int main()
{
	FILE *fp;

	fp = fopen("student.txt", "w");

	if (fp == NULL)
		return 1;

	fprintf(fp, "Welcome to C Programming");

	fclose(fp);

	printf("Data written successfully");

	return 0;
}
