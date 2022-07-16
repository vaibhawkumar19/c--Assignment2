//11. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
	int d,n,n1,n2,n3,n4;
	printf("enter the number ");
	scanf("%d",&n);
	printf("enter the digit ");
	scanf("%d",&d);
	n=n*10+d;
	printf("%d",n);
	return 0;
}
