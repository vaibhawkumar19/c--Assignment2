//3. Write a program to swap values of two int variables
//Author Name:- Vaibhaw Kumar
#include<stdio.h>
int main()
{
	int a=4,b=3,tmp;
	printf("before swap values are a= %d and b=%d\n",a,b);
	tmp=a;
	a=b;
	b=tmp;
	printf("After swap values are a= %d and b= %d",a,b);
	return 0;
}
