#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float c, f;
    printf("Enter the temperature in Farenheit: \n");
    scanf("%f",&f);
    c = 5.0/9.0* (f-32.0);
    printf("\n\nThe temperature in Celsius is: %f\n", c);
    getch();
}