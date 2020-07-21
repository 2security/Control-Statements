//Program to cheack a year leap year or not
#include<stdio.h>
#include<conio.h>
int main()
	{
	int year;

	printf("Enter the year");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
		printf("The year %d is leap",year);
	else
		printf("The year %d is not leap",year);
	return 0;
	}


