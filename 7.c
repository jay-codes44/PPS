#include <stdio.h>

int main(void)
{
	FILE *fp;
	char text[100];

	fp = fopen("student.txt", "a");
	if (fp == NULL)
		return 1;

	fprintf(fp, "\nFile Handling in C");
	fclose(fp);

	fp = fopen("student.txt", "r");
	if (fp == NULL)
		return 1;

	printf("File Contents:\n");
	while (fgets(text, sizeof(text), fp) != NULL)
		printf("%s", text);

	fclose(fp);
	return 0;
}
