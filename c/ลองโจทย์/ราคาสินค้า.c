#include <stdio.h>
#include <conio.h>
main()
{
	float a,result;
	printf("Number of price : ");
	scanf("%f",&a);
	if(a<5000)
	{
		printf("total price : %.2f",a);
	}
	else
	{
		result = a*0.9;  //decress 10% means 100% - 10 % = 90% = 0.9
		printf("total price : %.2f",result);
	}
	getch();
	return 0;
}
