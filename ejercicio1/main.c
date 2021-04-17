#include <stdio.h>
#include <stdlib.h>

int main()
{

    int entero;
    float flotante;
    char caracter;
    char cadena[20];

/*
    printf("Ingrese un entero: ");//stdio.h
    scanf("%d", &entero);//stdio.h, scanf es para pedir datos
    // variables tienen, el nombre de fantasia, el valor  y la direccion de memoria(son numero grandes en hexadecimal)
    // entero valor de la variable entero
    // &entero direccion de memoria de la variable entero
    printf("Usted ingreso el numero entero %d", entero);
*/

/*
    printf("Ingrese su altura: ");
    scanf("%f", &flotante);
    printf("Usted mide %.2f", flotante);
*/

/*
    printf("Ingrese sexo: ");
    fflush(stdin); // usar siempre cuando se pida un caracter o una cadena de caracteres
    scanf("%c", &caracter);
    printf("Su sexo es %c", caracter);
*/

    printf("Ingrese su nombre ");
    scanf("%s", cadena); // puede ir sin &
    printf("Su nombre es: %s", cadena);

/*
    int numeroEntero; // int numero entero
    float numeroFlotante; // float numero decimal
    char sexo; // char es un unico caracter
    char nombre[10] = "Jose"; // array/cadena de hasta 10 caracteres

    numeroEntero = 3;
    numeroFlotante = 4.10;
    sexo = 'f';

    printf("Usted se llama %s", nombre);
    printf("La variable sexo es: %c", sexo);
    printf("La variable numeroEntero vale: %d y la variable numeroFlotante vale: %.2f", numeroEntero, numeroFlotante); // equivalente a console.log(numero);
*/

    return 0;
}
