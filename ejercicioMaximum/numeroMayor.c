#include "numeroMayor.h"

int maximum (int a, int b, int c)
{
    int numeroMayor = c;

    if(a > b && a > c)
    {
        numeroMayor = a;
    }
    else
    {
        if(b >= a && b > c)
        {
            numeroMayor = b;
        }
    }

    return numeroMayor;
}

