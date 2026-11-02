#include <stdio.h>

struct Student
{
	int roll;
	char name[30];
	float marks;
};

void display(struct Student *p)
{
	printf("\nStudent Details\n");
	printf("Roll No: %d\n", p->roll);
	printf("Name: %s\n", p->name);
	printf("Marks: %.2f\n", p->marks);

	p->marks = 95;
	printf("Updated Marks: %.2f\n", p->marks);
}

int main(void)
{
	struct Student s;

	printf("Enter roll number, name and marks:\n");
	scanf("%d %29s %f", &s.roll, s.name, &s.marks);

	display(&s);
	return 0;
}
