#include<stdio.h>
#include<conio.h>
main()
{
    float x,y, area;
    printf("Program to find the area of a rectangle");
    printf("\n\nEnter the length and breadth of the rectangle\n");
    scanf("%f%f", &x,&y );
    area = x*y;
    printf("The area of the rectangle is %f", area);
    getch();
}