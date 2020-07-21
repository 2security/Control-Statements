#include<stdio.h>
#include<conio.h>
int main()
	{
		int n,r,s,Num;
		printf("\n Enter the number");
		scanf("%d",&n);
		Num=n;
		while(n>0)
			{
				r=n%10;
				s=s+r*r*r;
				n=n/10;
			}
		if(s==Num)
			printf("%d is Armstrong Number",Num);
		else
			printf("%d is not Armstrong Number",Num);
	}
