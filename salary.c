#define bs 1000.00
#define bo 250
#define co 0.04
#include<stdio.h>
#include<conio.h>
main()
{
    int q;
    float p, b, c, gs;
    printf("Enter number of items sold and price\n");
    scanf("%d %f",&q,&p);
    b=bo*q;
    c=co*q*p;
    gs=bs+b+c;
    printf("\n");
    printf("Bonus = %6.2f\n",b);
    printf("Commission = %6.2f\n",c);
    printf("Gross Salary = %6.2f\n",gs);
    getch();
}