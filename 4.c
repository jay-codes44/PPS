#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s;
    printf("Enter roll number, name and marks:\n");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);23
    printf("\nStudent Details\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}
