#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO DE LA FUNCION
//void significa que no devuelve nada
void sumarv1(void); // no recibe y no devuelve nada


int main()
{
    sumarv1();
    return 0;
}

void sumarv1(void)
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("EL resultado es: %d\2", resultado);
}
