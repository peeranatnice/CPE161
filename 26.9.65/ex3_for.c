#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float sum = 0;
	for(i=1;i<=100;i++)
	{
		sum += 1.0/(i*i);
	}
	printf("1+(1/4)+(1/9)+...+(1/10000) = %f",sum);
	getch();
	return 0;
}
