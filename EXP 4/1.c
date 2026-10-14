/*  
PRN : 2607012272
name : jay mangukiya
batch : C3
*/
#include <stdio.h>

int main() {

int a[100], i, n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);

printf("Enter %d elements in the array: ", n);
for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
}

printf("The elements in the array are:\n");
for (i = 0; i < n; i++) {
    printf("%d\t ", a[i]);
}
printf("\n");

  return 0;
}