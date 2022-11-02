#include<stdio.h>
#include<conio.h>
main()
{
	int digit=0,x;
	printf("Enter the last number that you want : ");
	scanf("%d",&x);
	while (digit<=x)
	{
		printf("%d\n",digit);
		++digit;
	}
	getch();
	return 0;
}
