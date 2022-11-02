#include<stdio.h>
#include<conio.h>

main()
{
	float a = 25.65939;
	double b = 555555555.55;
	
	printf("%.2f\n",a);
	printf("%.3f\n",a);
	printf("%e\n",a);
	printf("%E\n",a);
	printf("%.2E\n",a);
	printf("%lf",b);
	getch();
	return 0;
}
