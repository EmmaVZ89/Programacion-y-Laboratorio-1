#include <stdio.h>
#include <stdlib.h>

/** \brief realiza la division de dos enteros
 *
 * \param a int dividendo de la operacion
 * \param b int divisor de la operacion
 * \return float retorna el cociente entre el dividendo y divisor
 *
 */
float dividir(int a, int b);

/** \brief realiza la division de dos enteros
 *
 * \param a int dividendo de la operacion
 * \param b int divisor de la operacion
 * \param c float* puntero
 * \return int devuelve 1 si pudo hacer la division o 0 si no lo pudo hacer
 *
 */
int dividirRobusta(int a, int b, float* c);

// GLOSARIO:
// -puntero (variable que guarda la direccion de memoria de otra variable)
// -referencia == direccion de memoria.

int main()
{
    float resultado;
    int numero1 = 20;
    int numero2 = 10;
    int okDivision;

    okDivision = dividirRobusta(numero1, numero2, &resultado);

    if(okDivision)
    {
        printf("El resultado de la division es %.2f\n", resultado);
    }
    else
    {
        printf("Hubo un problema para realizar la division\n");
    }

//    if(numero2 != 0)
//    {
//        resultado = dividir(numero1, numero2);
//        printf("El resultado es %.2f", resultado);
//    }
//    else
//    {
//        printf("La division por cero no esta definida.\n");
//    }

    return 0;
}

float dividir(int a, int b)
{
    float resultado;

    resultado = (float) a / b;

    return resultado;// se devuelve basura si no se inicializa resultado.
}

int dividirRobusta(int a, int b, float* c)
{
    int todoOk = 0;

    if(b != 0 && c != NULL)// validamos que c no se NULL, sino se rompe todo.
    {
        *c = (float) a / b;
        todoOk = 1;
    }

    return todoOk;
}
