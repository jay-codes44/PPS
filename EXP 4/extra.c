/*  
PRN : 2607012272
name : jay mangukiya
batch : C3
*/
#include <stdio.h>

int main() {

int a[100], i, n, element, found = 0;
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

printf("Enter the element to search: ");
scanf("%d", &element);
for (i = 0; i < n; i++) {
  if (a[i] == element) {
    found = 1;
    break;
  }
}

if (found) {
  printf("Element is present in the array.\\n");
} else {
  printf("Element is not present in the array.\\n");
}

  return 0;
}