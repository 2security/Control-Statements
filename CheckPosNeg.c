//Program to check a number is positive or negative
#include<stdio.h>
#include<conio.h>
int main()
	{
		int n;
		printf("Enter a number to check:");
		scanf("%d",&n);
		if(n>0)
			printf("\n The number is Positive");
		else if(n<0)
			printf("\n The number is Negative");
		else
			printf("\n The number is Not Positive nor Negative");
			
		return 0;
	}
