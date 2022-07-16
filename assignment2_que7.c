//7. Write a program to find the position of first 1 in LSB.(4)2=0100
//Author Name:- Vaibhaw Kumar
#include<stdio.h>
int main()
{
	int i=12;
	int position=1;
	int m=1;
	while(!(i&m))
	{
		m=m<<1;
		printf("%d",i);
		position ++;
	} 
}
