#include<stdio.h>
#include<conio.h>
main()
{	int i,start,stop;
	float sum=0.0;
	scanf("%d",&start);
	scanf("%d",&stop);
	for(i=start;i<=stop;i++)
	{
		printf("%d\n",i);
		sum += i;
	}
	printf("sum = %f",sum);
	getch();
	return 0;
}
