#include <stdio.h>
#include <stdlib.h>

char mytolower(char caracter);

int main()
{
    char x = 'A';

//    mytolower(x); // el valor se pierde porque no se guarda en ningun lado.

    x = mytolower(x);

    printf("%c\n", x);

    return 0;
}

char mytolower(char caracter)
{
    if(caracter >= 'A' && caracter <= 'Z')
    {
        caracter += 32;
    }

    return caracter;
}
