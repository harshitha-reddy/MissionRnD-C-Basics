/*
OVERVIEW: Write a function which takes two numbers as input and swaps those two numbers.
E.g.: int a = 1, b = 2; after swap(a, b) call value of "a" should be 2 and value of "b" should be 1.

INPUTS:  Two integer pointers a, b.

OUTPUT:  Swap the values of a, b.

ERROR CASES:

NOTES:
*/
//#include<stdio.h>
//#include<conio.h>
//void swap(int*, int*);
/*int main()
{
	int a, b;
	printf("enter value for a and b: ");
	scanf_s("%d%d", &a, &b);
	swap(&a, &b);
	printf("values after swapping are %d %d",a, b);
	getch();
	return 0;
	
}*/
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("values after swapping are %d %d", a, b);

}