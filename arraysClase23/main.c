#include <stdio.h>
#include <stdlib.h>

#define TAM 6

/** \brief buscar un caracter en un array de caracteres
 *
 * \param vec[] char vector sobre el cual se realiza la busqueda
 * \param tam int tamanio del vector
 * \param caracter char caracter a buscar
 * \return int retorna el indice de la primera ocurrencia del caracter o -1 si no se encuentra
 *
 */
int buscarCaracter(char vec[], int tam, char caracter);

int main()
{
    char letras[] = {'a', 'e', 'x', 'j', 't', 'h'};
    char caracter = 'z';
    int indice;

    indice = buscarCaracter(letras, TAM, caracter);

    if(indice !=  -1)
    {
        printf("Se encontro el caracter %c y su indice es %d", caracter, indice);
    }
    else
    {
        printf("No se pudo encontrar el caracter %c", caracter);
    }
    printf("\n\n");

    return 0;
}


int buscarCaracter(char vec[], int tam, char caracter)
{
    int indice = -1;

    for(int i = 0; i < tam; i++)
    {
        if(vec[i] == caracter)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
