#include "emma.h"


int myIsDigit(char x)
{
    int esDigito = 0;

    if(x>='0' && x <= '9')
    {
        esDigito = 1;
    }

    return esDigito;
}
