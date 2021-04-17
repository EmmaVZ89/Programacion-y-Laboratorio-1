#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// para linux se usa __fpurge(stdin) en vez de fflush(stdin)

int main()
{
//    int numeroUno;
//    int numeroDos;
    //float suma;
//    float promedio;

//    char caracterMinuscula = 'A';
//    caracterMinuscula = tolower(caracterMinuscula); // tolower solo sirver para caracteres, usa biblioteca ctype
//    printf("%c", caracterMinuscula);
//
//    char caracterMayuscula = 'a';
//    caracterMayuscula = toupper(caracterMayuscula);
//    printf("%c", caracterMayuscula);

    char x = 'g';

    if(isdigit(x)) // define si es digito o no, devuelve 0 o 1
    {
        printf("Es un numero\n");
    }
    else
    {
        printf("No es un numero\n");
    }

    if(isalpha(x)) // define si es caracter o no, devuelve 0 o 1
    {
        printf("No es un numero");
    }
    else
    {
        printf("Es un numero");
    }

    if(isspace(x)) // define si es espacio o no, devuelve 0 o 1
    {
        printf("Es un espacio");
    }
    else
    {
        printf("No es un espacio");
    }

    // para numeros random se usa una libreria, include
    //

//    printf("Ingrese el primer numero: \n");
//    scanf("%d", &numeroUno);
//    printf("Ingrese el segundo numero: \n");
//    scanf("%d", &numeroDos);
//
//    //suma = numeroUno + numeroDos;
//    promedio = (float) (numeroUno + numeroDos) / 2; // casting o casteo es conversion de un tipo de numero a otro tipo de numero.
//    // parsing o parsear convertir un tipo de dato a otro tipo de dato.
//    printf("El promedio es: %.2f", promedio);

    return 0;
}
