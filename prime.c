#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int i, n;
    printf("Enter the number");
    scanf("%d",&n);
    for (i=2; i<=n/2; i++)
    {
        if(n%i==0)
        goto a ;

    }
    printf( "The Number is Prime");
    getch();
    a: printf("The Number is not prime");
    getch();
}