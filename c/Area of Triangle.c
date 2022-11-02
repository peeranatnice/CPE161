#include <stdio.h>
#include <conio.h>
main()
{
	float a,b,h;
	printf("Enter base : ");
	scanf("%f",&b);
	printf("Enter height : ");
	scanf("%f",&h);
	a = (b * h)/2;
	printf("Your area of triangle is %f",a);
	getch();
	return 0;
}
