//8. Write a program to check whether the given number is even or odd using a bitwise operator.
//Author Name:- Vaibhaw Kumar
#include<stdio.h>
int main()
{
	int num;
	printf("enter the number ");
	scanf("%d",&num);
	if(num%2==0)
		printf("even ");
	else
	 	printf("odd ");
	return 0;
}
