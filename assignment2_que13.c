//13. Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
#include<stdio.h>
int main()
{
	int n,rev=0,dig;
	printf("enter the three digit number");
	scanf("%d",&n);
	while(n!=0)
	{
		dig=n%10;
		rev=rev*10+dig;
		n/=10;
	}
	printf("%d",rev);
	return 0;
}
