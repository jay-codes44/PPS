#include <stdio.h>

void change(int x)
{
    x = 100;
    printf("Inside function = %d\n", x);
}

int main()
{
    int a = 10;
    printf("Before function call = %d\n", a);
    change(a);

    printf("After function call= %d", a);

    return 0;
}
