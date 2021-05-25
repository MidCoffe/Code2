//square.cpp
#include <stdio.h>
#include <stdlib.h>

void poleProstokata()
{
    float a,b,c;
    printf("podaj dlugosci bokow prostokata: (../..)");
    scanf ("%f/%f",&a,&b);
    if (a > 0 || b > 0)
    {
        c = a * b;
        printf ("pole prostokata o bokach a, b jest rowna: %f \n", c);
    }
    else
       printf ("podano nieprawidlowe dane \n");
       
}
