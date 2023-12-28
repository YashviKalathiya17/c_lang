#include<stdio.h>
#include<conio.h>

main()
{
	 float c,formula;
	 clrscr();
	 printf("The temperature in Celsius : ");
	 scanf("%f",&c);
	 formula = (c*9/5)+32;
	 printf("The temperature in Fahrenheit : %f",formula);
	 getch();
}