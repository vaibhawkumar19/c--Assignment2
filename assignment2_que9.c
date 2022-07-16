//9. Write a program to print size of an int, a float, a char and a double type variable
//Author Name:- Vaibhaw Kumar;
#include<stdio.h>
int main()
{
	int a,b,d;
	a=sizeof(int );
	b=sizeof(float);
	c=sizeof(char );
	d=sizeof(double);
	printf("size of int is %d\n",a);
	printf("size of float is %d\n",b);
	printf("size of char is %d \n",c);
	printf("size of double is %d",d);
	return 0;
}
