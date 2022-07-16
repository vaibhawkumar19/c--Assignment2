//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.
#include<stdio.h>
int main()
{
	float usd,inr;
	printf("enter dollor ");
	scanf("%f",&usd);
	inr=usd*70.23;
	printf("%f",inr);
	return 0;
}
