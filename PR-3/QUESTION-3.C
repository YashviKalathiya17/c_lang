#include<stdio.h>
#include<conio.h>

main()
{
      int f,l,n;
      clrscr();
      printf("Enter any number : ");
      scanf("%d",&n);
      l=n%10;
      while(n!=0)
      {
	 f=n;
	 n=n/10;
      }
      printf("Sum of first and last digit is %d",f+l);
      getch();

}
