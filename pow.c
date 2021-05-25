//pow.c
#include <stdio.h>
#include <stdlib.h>

void powierzchniaProstopadloscianu()
{
    float a,b,c,d;
    printf("podaj dlugosci bokow prostopadloscianu: (../../..)");
    scanf ("%f/%f/%f",&a,&b,&c);
    if (a > 0 || b > 0 || c > 0)
    {
        d = a * b * 2 + a * c * 2 + b * c * 2;
        printf ("powierzchnia prostopadloscianu o bokach a, b, c jest rowna: %f \n", d);
    }
    else
       printf ("podano nieprawidlowe dane \n");
}
