#include<stdio.h>
#include<conio.h>
main()
{ 
	int round,i;
	float average,number,sum=0.0;
	printf("How many round do you want to do? : ");
	scanf("%d",&round);
	for(i=1;i<=round;i++)
	{
		printf("number %d : ",i);
		scanf("%f",&number);
		sum+=number;
	}
	printf("\nThe summation of value is %f\n",sum);
	average = sum/round;
	printf("\nThe average value is %f\n",average);
	getch();
	return 0;
}
