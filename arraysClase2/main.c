#include <stdio.h>
#include <stdlib.h>

#define TAM 5

// Declarar un array de tamanio 5 cargarlo secuencialmente
// mostrarlo tal cual fue cargado
// mostrarlo al reves

/** \brief muestra por consola los elementos de un array de enteros
 *
 * \param vec[] int array que se va a mostrar
 * \param tam int tamanio del array
 * \param inicio int indice del primer elemento a mostrar
 * \param fin int indice del ultimo elemento a mostrar
 * \return int devuelve 1 si esta todo OK o 0 si hubo un error.
 *
 */
int mostrarNumeros(int vec[], int tam, int inicio, int fin);

int main()
{
    int numeros[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }
    printf("\n");
    printf("Array en orden: ");
//    for (int i = 0; i < TAM; i++)
//    {
//        printf("%d, ", numeros[i]);
//    }

    if(mostrarNumeros(numeros, TAM, 0, 4) == 0)
    {
        printf("Error. Se ingresaron mal los parametros de la funcion.");
    }

    printf("\n\n");
    printf("Array al reves: ");
//    for (int i = TAM-1; i >= 0; i--)
//    {
//        printf("%d, ", numeros[i]);
//    }

    if(mostrarNumeros(numeros, TAM, 4, 0) == 0)
    {
        printf("Error. Se ingresaron mal los parametros de la funcion.");
    }

    printf("\n");

    return 0;
}

int mostrarNumeros(int vec[], int tam, int inicio, int fin)
{
    int todoOK = 0;

    if(vec != NULL && tam > 0 && inicio >= 0 && inicio < tam && fin >= 0 && fin < tam)
    {
        if(inicio < fin)
        {
            for(int i = inicio; i <= fin; i++)
            {
                printf("%d, ", vec[i]);
            }
        }
        else
        {
            for(int i = inicio; i >= fin; i--)
            {
                printf("%d, ", vec[i]);
            }
        }
        todoOK = 1;
    }
    return todoOK;
}
