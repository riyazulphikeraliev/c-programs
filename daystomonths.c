#include<stdio.h>
#include<conio.h>
main()
{
    int m,d,t;
    printf("Enter the number of days:\n");
    scanf("%d", &t);
    m = t/30;
    d = t%30;
    printf("the number of months:%d days: %d",m,d);
    getch();
}