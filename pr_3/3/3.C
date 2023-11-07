#include<stdio.h>
#include<conio.h>
main()
{
       int f,l,n;
       clrscr();

       printf("enter any  number :");
       scanf("%d",&n);

       l=n%10;
       while(n!=10)
       {
       f=n;
       n=n/10;
       }
       printf("sum of first and last digit is: %d",f+l);







	getch();
}
