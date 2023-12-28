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

