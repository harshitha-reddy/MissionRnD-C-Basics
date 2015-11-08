/*
OVERVIEW:  Given 2 integers (num1, num2), write a function that returns the count of numbers between the num1..num2 that are divisible by num1.
		E.g.: count(3, 15) returns 5 (3, 6, 9, 12, 15).

INPUTS:  Two numbers num1, num2.
		num1, num2 >= 0.

OUTPUT: Return the count of numbers between the num1..num2 that are divisible by num1.

ERROR CASES: Return -1 in error cases.

NOTES:
*/
#include<stdio.h>
#include<conio.h>
int count(int, int);
/*int main()
{

	int num1, num2, count1 = 0, result;
	printf("enter the two numbers :");
	scanf_s("%d%d", &num1, &num2);
	result = count(3, 15);
	getch();
	return 0;
}*/


int count(int num1, int num2) {
	int  count1 = 0, result, n, i;
	printf("enter the two numbers :");
	scanf_s("%d%d", &num1, &num2);
	n = num1;
	for (i = num1; i <= num2; i++)
	{
		if (i%num1 == 0)
			count1++;

	}
	printf("count is %d", count1);
	

	return 0;
}