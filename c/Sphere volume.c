#include<stdio.h>
#include<conio.h>
main()
{
	float r,result;
	printf("Please input radius : ");
	scanf("%f",&r);
	result = (4/3.0)*3.1415*r*r*r;
	printf("Sphere volume is %f",result);
}
