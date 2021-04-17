#include <stdio.h>
#include <stdlib.h>

int main()
{
// Las funciones nos permiten la reutilizacion de codigo.
// familia de funciones
//    f1: No devuelve y no recibe.
//    f2: No devuelven y recibe.
//    f3: Devuelve y no recibe.
//    f4: Devuelve y recibe.
// Al crear una funcion tengo que pensar en su reutilizacion sin importar el programa.
// Partes de una funcion:
//-prototipo
//-cuerpo o desarrollo (PARTE MAS IMPORTANTE)
//-llamada o invocacion de la funcion

    int num1;
    int num2;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("EL resultado es: %d\2", resultado);
    return 0;
}
