#include<stdio.h>
#include<conio.h>
main()
{
	int N,i;
	long fac = 1;
	printf("Enter N!: ");
	scanf("%d",&N);
	if(N>0)
	{
		for(i=N;i>=1;i--)
		fac *= i ;
	}
	else
	{
		fac = 1;
	}
	printf("\t%d! = %ld",N,fac);
}
