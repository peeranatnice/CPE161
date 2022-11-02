#include<stdio.h>
#include<conio.h>

main()
{
	float x;
	printf("Input number of money : ");
	scanf("%f",&x);
	
	int ten,coin,five;
	ten = (int)x/10;
	five = (int)x%10/5;
	coin = (int)x%10%5;
	printf("All Change of %f \n",x);
	printf("Number of Ten Bath is %d coins. \n",ten);
	printf("Number of five Bath is %d coins. \n",five);
	printf("Number of One Bath is %d coins. \n",coin);
	getch();
	return 0;
}
