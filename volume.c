//volume.cpp
#include <stdio.h>
#include <stdlib.h>

void Objetosc()
{
    float a,b,c,d;
    printf("podaj dlugosci bokow prostopadloscianu: (../../..)");
    scanf ("%f/%f/%f",&a,&b,&c);
    if (a > 0 || b > 0 || c > 0)
    {
        d = a*b*c;
        printf ("Objetosc prostopadloscianu o bokach a, b, c jest rowna: %f \n", d);
    }
    else
       printf ("podano nieprawidlowe dane \n");
}

