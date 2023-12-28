#include<stdio.h>
#include<conio.h>

main()
{
	   int a,b,c;
	   clrscr();
	   printf("Enter value of a : ");
	   scanf("%d",&a);
	   printf("Enter value of b : ");
	   scanf("%d",&b);
	   printf("Enter value of c : ");
	   scanf("%d",&c);

	   (a<b)
	       ?
		    (a<c)
		       ? printf("%d is minimum",a)
		       : printf("%d is minimum",c)
	       :
		    (b<c)
		       ? printf("%d is minimum",b)
		       : printf("%d is minimum",c);
	   getch();
}