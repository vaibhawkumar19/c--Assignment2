//4. Write a program to swap values of two int variables without using a third variable.
//Author Name:- Vaibahw Kuamr
#include<stdio.h>
int main()
{
	int a=4,b=3;
	printf("before swap values are a= %d and b=%d\n",a,b);
	b=a-b;//b=4-3=1
	a=a-b;//a=4-1=3
	b=b+a;//b=3+1=4
	printf("After swap values are a= %d and b= %d",a,b);
	return 0;
}
