/*
PRN : 26070122272
NAME : Jay Mangukiya
BATCH : CSE C3
*/
#include <stdio.h>
int main()
 {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

   while(n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("Number of digits: %d\n", count);
    retu
    \rn 0;
}