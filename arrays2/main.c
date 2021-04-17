#include <stdio.h>
#include <stdlib.h>

#define TAM 5

// pedir 5 numeros e informar el promedio

int main()
{
//    int numeros[] = {3, 4, 5, 6, 7} // definir por extension.
    int numeros[TAM];
    int acumulador = 0;
    float promedio;

    for(int i = 0; i < TAM; i++)// 0 1 2 3 4, manera secuencial
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nLos numero ingresados son: ");
    for(int i = 0; i < TAM; i++)
    {
        printf("%d, ", numeros[i]);
    }
    printf("\n\n");

    for(int i = 0; i < TAM; i++)
    {
        acumulador += numeros[i];
    }

    promedio = (float) acumulador/TAM;


    printf("El promedio de numeros es: %.2f\n\n", promedio);

    return 0;
}
