#include<stdio.h>
#include<conio.h>
int Reverse(int n);
int main()
	{
		int n;
		printf("Enter an number:");
		scanf("%d",&n);
		printf("Reverse is:%d",Reverse(n));
		return 0;
	}
int Sum=0,r;
int Reverse(int n)
	{
		if(n)
			{
				r=n%10;
				Sum=r+Sum*10;
				Reverse(n/10);
			}
		else 
			return Sum;
	return Sum;	
	}
