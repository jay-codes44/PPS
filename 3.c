#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q, *temp, n, new_n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
        return 1;

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);

    q = (int *)calloc(n, sizeof(int));
    if (q == NULL)
    {
        free(p);
        return 1;
    }
    printf("Initial calloc values:\n");
    for (i = 0; i < n; i++)
        printf("%d ", q[i]);

    printf("\nEnter new size: ");
    scanf("%d", &new_n);
    temp = (int *)realloc(p, new_n * sizeof(int));
    if (temp == NULL)
    {
        free(p);
        free(q);
        return 1;
    }
    p = temp;
    if (new_n > n)
    {
        printf("Enter additional elements:\n");
        for (i = n; i < new_n; i++)
            scanf("%d", &p[i]);
    }
    printf("Updated array:\n");
    for (i = 0; i < new_n; i++)
        printf("%d ", p[i]);

    free(p);
    free(q);
    return 0;
}