#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main()
{
//    char x;

//    printf("Ingrese unea letra: ");
//    x = getchar();// espera un caracter, es como un scanf
//    printf("%c\n", x);

//    x = getch();// espera un caracter, sin confirmar con enter.
//    initscr();
//    timeout( -1 );

    printf("Presione una tecla para continuar...\n");
    __fpurge(stdin);
    getch();
    printf("Se termino el programa\n");
//    endwin();

//    x = getche();//muestra lo ingresado

    return 0;
}
