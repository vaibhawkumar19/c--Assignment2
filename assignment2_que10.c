//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
	int n;
	printf("enter the digit ");
	scanf("%d",&n);
	int r;
	r=n%10;
	n=n-r;
	printf("%d",n);
	return 0;
}
