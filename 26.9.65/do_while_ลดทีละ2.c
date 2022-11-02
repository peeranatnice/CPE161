#include<stdio.h>
#include<conio.h>
main()
{ 
	int start = 500;
	do
	{	printf("\t %d \n",start);
		start-=2;
	}
	while (start>=0);
	getch();
	return 0;
}
