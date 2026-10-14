/*
Name : 
PRN: 26070122
Batch : C3
Experiment number : 3
*/
#include <stdio.h>

int main()
{
	int num, digit, reverse, original;

	printf("Enter the value of the number: ");
	scanf("%d", &num);
	original = num;
	reverse = 0;

	while (num != 0) {
		digit = num % 10;
		reverse = reverse * 10 + digit;
		num = num / 10;
	}

	if (reverse == original) {
		printf("The entered number is a palindrome number\n");
	} else {
		printf("The entered number is not a palindrome number\n");
	}

	return 0;
}
