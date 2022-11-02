#include<stdio.h>
#include<conio.h>
main()
{ 
	int ix=5;
	unsigned int ux=5;
	long int lx=5;
	printf("ix =%d\n",ix);
	printf("ux =%u\n",ux);
	printf("lx =%ld\n",lx);
	printf("5000 times of ix =%ld\n",ix*5000);
	printf("5000 times of ux =%lu\n",ux*5000);
	printf("500000 times of ux =%lu\n",ux*500000);
	printf("500000 times of lx =%ld\n",ix*500000);
	getch();
	return 0;
}
