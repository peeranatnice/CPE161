#include<stdio.h>
#include<conio.h>
main()
{ 
	/*char university[100];
	printf("Enter your university : ");
	scanf("%s",university);
	printf("Your university is %s\n",university);*/
	
	char university[100];
	printf("Enter your university : ");
	gets(university);
	printf("Your university is %s",university);
	getch();
	return 0;
}
