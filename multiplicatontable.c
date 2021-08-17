#define COLMAX 10
#define ROWMAX 12
#include<stdio.h>
#include<conio.h>
main()
{
    int row=1, column, y;
    do
    {
       column=1;
       do
       {
        y=row*column;
        printf("%4d",y);
        column=column+1; 
       } 
       while (column<=COLMAX);
        printf("\n");
        row=row+1;
    } 
    while (row<=ROWMAX);
    getch();
    
}