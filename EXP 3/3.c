/*
PRN : 26070122
NAME : 
BATCH : CSE C3
*/

#include <stdio.h>
int main()
 {
    int i, n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}