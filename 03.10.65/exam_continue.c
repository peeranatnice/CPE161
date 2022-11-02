#include<stdio.h>
#include<conio.h>
main()
{
	long count,a=0,sum=0;
	for (count=1; count<=1000; count++)
	{
		if ((count%17 == 0)||(count%19 == 0))
		{
			printf("%ld ",count);
			sum += count;
			a++;
		}
	}
	printf("\n\n\t All counts = %d",a);
	printf("\n\t sum = %ld",sum);
	getch();
	return 0;
}
