#include <stdio.h>
#include <conio.h>
main()
{
	float a,b1,b2,h;
	printf("Enter base1 : ");
	scanf("%f",&b1);
	printf("Enter base2 : ");
	scanf("%f",&b2);
	printf("Enter height : ");
	scanf("%f",&h);
	a = 0.5* (b1+b2) * h;
	printf("Your area of trapezoid is %f",a);
	getch();
	return 0;
}
