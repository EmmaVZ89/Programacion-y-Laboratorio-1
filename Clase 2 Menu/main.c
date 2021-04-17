#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "menuOpciones.h"

void activarFlag(int* flag);
void resetFlag(int* flag);

int main()
{
    char opcion;
    char salir = 'n';
    int flagSaludo = 0;
    int flagBrindis = 0;

    do
    {
        opcion = menu();

        switch(opcion)
        {
            case'A':
                printf("Hola, que tal?\n\n");
//                flagSaludo = 1;
                activarFlag(&flagSaludo);
                systemPause();
            break;

            case'B':
                if(flagSaludo)
                {
                    printf("Chin Chin\n\n");
                    activarFlag(&flagBrindis);
                }
                else
                {
                    printf("Antes de brindar deberiamos saludar\n\n");
                }
                systemPause();
            break;

            case'C':
                if(flagBrindis)
                {
                    printf("Chau, nos vemos!\n\n");
                    resetFlag(&flagSaludo);
                    resetFlag(&flagBrindis);
                }
                else
                {
                    if(flagSaludo)
                    {
                        printf("Deberiamos brindar antes de despedirnos\n\n");
                    }
                    else
                    {
                        printf("Deberiamos saludarnos antes de despedirnos\n\n");
                    }
                }
                systemPause();
            break;

            case'D':
                printf("Esta seguro que quiere salir? \ns: Si\nn: No\nRespuesta: ");
                fflush(stdin);
                scanf("%c", &salir);
                salir = tolower(salir);
            break;
        }
    }
    while(salir == 'n');

    return 0;
}

void activarFlag(int* flag)
{
    if(*flag == 0)
    {
        *flag = 1;
    }
}

void resetFlag(int* flag)
{
    if(*flag == 1)
    {
        *flag = 0;
    }
}
