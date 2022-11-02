#include <stdio.h>
#include <conio.h>
main()
{
	int a;
	printf("Enter Number : ");
	scanf("%d",&a);
	if(a%2 == 1)
	{
		printf("%d is odd number.",a);
	}
	else
	{
		printf("%d is even number.",a);
	}
}
