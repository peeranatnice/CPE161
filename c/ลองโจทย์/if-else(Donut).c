#include <stdio.h>
#include <conio.h>
main()
{
	int a,result1,result2;
	printf("Number of Donut : ");
	scanf("%d",&a);
	if(a<8)
	{
		result1 = a*25;
		printf("total price : %d",result1);
   	}
	if(a>=8)
	{
		result2 = a*20;
		printf("total price : %d",result2);
	}
	getch();
	return 0;
}
