#include<stdio.h>
#include<conio.h>

main()
{
	     int a,b,c,d;
	     clrscr();
	     printf("Enter value of a : ");
	     scanf("%d",&a);
	     printf("Enter value of b : ");
	     scanf("%d",&b);
	     printf("Enter value of c : ");
	     scanf("%d",&c);
	     printf("Enter value of d : ");
	     scanf("%d",&d);

	     if (a>b)
	     {
	       if (a>c)
	       {
		  if (a>d)
		  {
		     printf("%d is maximum",a);
		  }
		  else
		  {
		     printf("%d is maximum",d);
		  }
	       }
	       else
	       {
		 if (c>d)
		 {
		   printf("%d is maximum",c);
		 }
		 else
		 {
		   printf("%d is maximum",d);
		 }
	       }
	     }
	     else
	     {
	       if (b>c)
	       {
		 if(b>d)
		 {
		   printf("%d is maximum",b);
		 }
		 else
		 {
		   printf("%d is maximum",d);
		 }
	       }
	       else
	       {
		 if(c>d)
		 {
		   printf("%d is maximum",c);
		 }
		 else
		 {
		   printf("%d is maximum",d);
		 }
	       }
	     }
	     getch();
}