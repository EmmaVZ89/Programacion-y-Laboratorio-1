#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int y; // solo se puede guardar positivo, hasta 2 a la 32 menos 1.
    long int z; //
    int x = 2147483647; // 2 a la 31 menos uno. 0111(31 unos).
    printf("x vale: %d\n", x);
    return 0;
}

// antes / ahora
// int 2 bytes / W y L 4
// long int 4 bytes / W4, L 8
// long long int 8 bytes / W y L 8
