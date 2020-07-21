#include<stdio.h>
#include<conio.h>
#define pi 3.14159265359
int main()
	{
		float r,Area,Cir;
		
		printf("Enter the radius of the circle");
		scanf("%f",&r);
		
		Area=pi*r*r;
		Cir=2*pi*r;
		
		printf("\nArea of the circle is=%f",Area);
		printf("\nCircumference of the circle is=%f",Cir);
		return 0;
	}
