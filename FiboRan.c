#include<stdio.h>
int main()
	{
		int  a=0,b=1,c,n,i;
		printf("\n Enter the no of elements you need to display...");
		scanf("%d",&n);
		printf("\n Fibonacci series are...");
		printf("%d %d ",a,b);
		for(i=2;i<n;i++)
			{
				c=a+b;
				printf("%d ",c);
				a=b;
				b=c;
			}
		return 0;
	}

