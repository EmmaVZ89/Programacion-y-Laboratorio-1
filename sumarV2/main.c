#include <stdio.h>
#include <stdlib.h>

void sumarv2(int a, int b);// PROTOTIPO
// los parametros que estan en el prototito son llamados formales.

int main()
{
    int num1;
    int num2;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    sumarv2(num1, num2);
    return 0;
}

void sumarv2(int a, int b)// los que estan en parenteris se llaman parametros.
// los parametros que se pasan en la llamada son llamados "parametros actuales"(argumentos).
{
    int resultado;

    resultado = a + b;

    printf("El resultado es %d\n", resultado);
}
