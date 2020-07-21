#include<stdio.h>
#include<conio.h>
int main()
	{
		int n,result,r;
		printf("Enter the value of n and r:");
		scanf("%d%d",&n,&r);
		result=fact(n)/fact(n-r);
		printf("%d",result);
		return 0;
	}
int fact(int n)
	{
		int fact=1;
		while(n)
				{
				fact=fact*n;
				n--;		
				}
	}
