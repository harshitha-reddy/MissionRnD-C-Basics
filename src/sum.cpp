/*
OVERVIEW: Write a function which takes two numbers as input and returns sum of two numbers.
		E.g.: sum(2, 3) returns 5.

INPUTS: Two numbers a, b;

OUTPUT: sum of the numbers a, b.

ERROR CASES:

NOTES:
*/

#include<stdio.h>
#include<conio.h>

int sum(int a, int b);
int main()
{
	int   c;
	c = sum(7,9);
	printf("the number is :%d",c);
	getch();
	
	return 0;
}

int sum(int a, int b)
{
	return (a+b);
}