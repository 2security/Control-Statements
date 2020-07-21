#include<stdio.h>
#include<conio.h>
int rev(int );
int main()
	{
	int m,n,i;

	printf("Enter the range");
	scanf("%d%d",&m,&n);
	printf("\nThe Palindrome Numbers between the range are..:");
	for(i=m;i<=n;i++)
		{
		if(i==rev(i))
			printf("%d ",i);
		}
	return 0;
	}
int rev(int n)
	{
	int r,rev=0;
	while(n>0)
		{
		r=n%10;
		rev=r+rev*10;
		n=n/10;
		}
	return rev;
	}
