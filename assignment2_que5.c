//5. Write a program to input a three-digit number and display the sum of the digits.
//Author Name:- Vaibhaw Kumar;
#include<stdio.h>
int main()
{
	int n,s=0,r,i;
	printf("Enter three digit number ");
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
	s+=r;
	n/=10;
	}
	printf("sum %d",s);
	return 0;
}
