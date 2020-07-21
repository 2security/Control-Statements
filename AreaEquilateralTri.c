#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
	{
		float a,Area;
		printf("Enter the side of equilateral triangle:");
		scanf("%f",&a);
		
		Area=(sqrt(3)/4)*a*a;
		
		printf("The area of equilateral triangle is=%f",Area);
		return 0;
	}
	

