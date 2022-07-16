//2. Write a program to print a given number without its last digit.
//Author name:-Vaibhaw Kumar
#include<stdio.h>
int main()
{
	int n,r=0;
	printf("ente the no ");
	scanf("%d",&n);
	n=n/10;
	r=r*10+n;
	r=n%10;
	printf("%d",n);
}
