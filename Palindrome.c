//Program to check a number palindrome or not
#include<stdio.h>
#include<conio.h>
int main()
	{
		int n,m,r,rev=0;
		
		printf("\n Enter the number");
		scanf("%d",&n);
		m=n;
		while(n>0)
                {
                 r=n%10 ;
                 rev=r+rev*10;
                 n=n/10;
                 }
        if(rev==m)
        	printf("\n The number is palindrome");
        else
    		printf("\n The number is not palindrome");
    	return 0;
	}
