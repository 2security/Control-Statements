#include<stdio.h>
int main()
	{
		int n,x,y,i,flag,j;
		printf("\n Enter the range");
		scanf("%d%d",&x,&y);
		for(j=x;j<=y;j++)
			{
				flag=0;
				n=j;
				for(i=2;i<=(n/2);i++)
					{
						if(n%i==0)
							{
								flag=1;
								break;
							}
				    }
				if(flag==0)		
				printf("%d ",j);
			}
		return 0;
	}

