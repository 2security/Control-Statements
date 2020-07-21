//Program to find factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
	{
		int num,n,fact=1,r;
		printf("\n Enter the number");
		scanf("%d",&n);
		num=n;
		while(n)
			{
				fact=fact*n;
				n--;
			}
		printf("\n The factorial of %d is %d",num,fact);
		return 0;
	}
