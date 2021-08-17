#define FIRST 360
#define SECOND 240
#include<stdio.h>
#include<conio.h>
main()
{
    int n,m,roll,tot,marks,i,j;
    printf("Enter the number of students and subjects\n\n");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        printf("\n\nEnter the roll-number");
        scanf("%d",&roll);
        tot=0;
        printf("\nEnter the marks of %d subjects for roll-number %d\n",m,roll);
        for(j=1;j<=m;j++)
        {
            scanf("%d",&marks);
            tot=tot+marks;
        }
        printf("The total marks=%d",tot);
        if(tot>=FIRST)
        printf("First Class\n\n");
        else if(tot>=SECOND)
        printf("Second Class\n\n");
        else
        printf("****FAILED****");
    }
    getch();
}