Q.1
#include<stdio.h>
#include<conio.h>
main()
{
int i,j;
clrscr();
for(i=41;i<=45;i++)
{
for(j=41;j<=45;j++)
{
if(j<=i)
{
printf(" %d",j);	
}
else
{
printf("  "); 
}
}
printf("\n");
}
getch();
}


                          Q.2
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n=11;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j<=i)
{
printf(" %d",n++);	
}
else
{
printf("  "); 
}
}
printf("\n");
}
getch();
}


Q.3
#include<stdio.h>
#include<conio.h>
main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j>=6-i)
{
printf(" %d",j);	
}
else
{
printf("  "); 
}
}
printf("\n");
}
getch();
}
 

                         Q.4
#include <stdio.h>
#include<conio.h>
main() 
{
int rows,i,j,k;
clrscr();
printf("Enter the number of rows: ");
scanf("%d", &rows);
for ( i = 1; i <= rows; i++)
{
for ( j = 1; j < i; j++) 
{
printf("   ");
}
for ( k = i; k <= rows; k++) 
{
if ((k - i) % 2 == 0) 
{
printf(" 1 ");
}
else
{
printf(" 0 ");
}
printf("\n");
}
getch();
}

                             Q.5
#include <stdio.h>
#include<conio.h>
main() 
{
int rows;
clrscr();
printf("Enter the number of rows: ");
scanf("%d", &rows);
for (int i = 1; i <= rows; i++) 
{
for (int j = 1; j <= i; j++) 
{
printf("%d ", j);
}
for (int k = 1; k <= 2 * (rows - i); k++) 
{
printf("   ");
}
for (int l = i; l >= 1; l--)
{
printf("%d ", l);
}
printf("\n");
}
getch();
}



                          Q.6
#include <stdio.h>
#include<conio.h>
int main() 
{
for (int i = 1; i <= 5; i++)
{
for (int j = 1; j <=9; j++) 
{
if(j>=6-i && j<=4+i)
{
printf("%d ",j);
}
else
{
printf("  ");
}
}
printf("\n");
}
getch();
}
  
                          Q.7
#include <stdio.h>
#include<conio.h>
main() 
{
for (int i = 1; i <= 3; i++) 
{
for (int j = 1; j <= 5; j++) 
{
if (i == 1 || i == 3 || j == 1 || j == 5) 
{
printf("* ")
}
else 
{
printf("  "); 
 }
 }
printf("\n"); 
 }
 for (int i = 1; i <= 2; i++) 
 {
 for (int j = 1; j <= 2; j++) 
 {
 if (i == 1 || i == 2 || j == 1 || j == 2) 
 {
 printf("*      ");
  } 
 else 
{
printf("  "); 
 }
 }
 printf("\n"); 
 }
getch();
}