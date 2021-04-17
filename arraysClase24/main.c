#include <stdio.h>
#include <stdlib.h>

#define TAM 6

int buscarReemplazar(char vec[], int tam, char buscar, char reemplazar);
int main()

{
    char letras[] = {'a', 'e', 'x', 'j', 'h', 'h'};
    int cantidadReemplazadas;
    char caracter = 'h';
    char reemplazo = 'i';

    printf("Array antes de ejecutar la funcion: \n");
    for(int i = 0; i < TAM; i++)
    {
        printf("%c, ", letras[i]);
    }
    printf("\n\n");

    cantidadReemplazadas = buscarReemplazar(letras, TAM, caracter, reemplazo);

    printf("Array despues de ejecutar la funcion: \n");
    for(int i = 0; i < TAM; i++)
    {
        printf("%c, ", letras[i]);
    }
    printf("\n\n");

    printf("La cantidad de caracteres reemplazados son %d", cantidadReemplazadas);
    printf("\n\n");

    return 0;
}

int buscarReemplazar(char vec[], int tam, char buscar, char reemplazar)
{
    int cantReemplazadas = 0;

    for(int i = 0; i < tam; i++)
    {
        if(vec[i] == buscar)
        {
            vec[i] = reemplazar;
            cantReemplazadas++;
        }
    }
    return cantReemplazadas;
}
