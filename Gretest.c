//Program to find the greatest number among 3 numbers
#include<stdio.h>
#include<conio.h>
int main()
	{
		int a,b,c;
		printf("\n Enter three number");
		scanf("%d%d%d",&a,&b,&c);
		if((a>b)&&(a>c))
			printf("\n%d is greatest",a);
		else if((b>a)&&(b>c))
			printf("\n%d is greatest",b);
		else
			printf("\n%d is greatest",c);
		return 0;
	}
