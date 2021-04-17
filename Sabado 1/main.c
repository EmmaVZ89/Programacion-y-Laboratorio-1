#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Ejercicio 1:
//Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
//    a) El promedio de los números positivos.
//    b) El promedio de los números negativos.
//int main()
//{
//    int numero;
//    char respuesta = 's';
//    int acumuladorNegativo = 0;
//    int contadorNegativo = 0;
//    int acumuladorPositivo = 0;
//    int contadorPositivo = 0;
//    float promedioNegativo;
//    float promedioPositivo;
//
//    while(respuesta=='s')
//    {
//        printf("Ingrese un numero: ");
//        scanf("%d", &numero);
//
//        if(numero > 0)
//        {
//            acumuladorPositivo+=numero;
//            contadorPositivo++;
//        }
//        else
//        {
//            acumuladorNegativo+=numero;
//            contadorNegativo++;
//        }
//
//        printf("¿Desea continuar?");
//        __fpurge(stdin);
//        scanf("%c", &respuesta);
//        respuesta = tolower(respuesta);
//    }
//
//    if(contadorPositivo!=0)
//    {
//        promedioPositivo = (float) acumuladorPositivo/contadorPositivo;
//        printf("El promedio de numeros positivos es %.2f\n", promedioPositivo);
//    }
//
//    if(contadorNegativo!=0)
//    {
//        promedioNegativo = (float) acumuladorNegativo/contadorNegativo;
//        printf("El promedio de numero negativos es %.2f", promedioNegativo);
//    }
//
//    return 0;
//}



//Ejercicio 2:
//Ingresar 5 números. Determinar cuál es el máximo y el mínimo  e indicar en qué orden fue ingresado.
//int main()
//{
//    int numero;
//    int contador = 0;
//    int indice = 0;
//    int numeroMayor;
//    int numeroMenor;
//    int banderaMayor = 1;
//    int banderaMenor = 1;
//    int indiceMayor;
//    int indiceMenor;
//
//    while(contador<5)
//    {
//        printf("Ingrese un numero: ");
//        scanf("%d", &numero);
//
//        if(banderaMayor == 1 || numeroMayor<numero)
//        {
//            numeroMayor = numero;
//            indiceMayor = indice;
//            banderaMayor = 0;
//        }
//
//        if(banderaMenor == 1 || numeroMenor>numero)
//        {
//            numeroMenor = numero;
//            indiceMenor = indice;
//            banderaMenor = 0;
//        }
//
//        indice++;
//
//        contador++;
//    }
//
//    printf("El numero mayor es %d y su indice es %d\n", numeroMayor, indiceMayor);
//
//    printf("El numero menor es %d y su indice es %d", numeroMenor, indiceMenor);
//
//    return 0;
//}



//Ejercicio 3:
//Realizar el algoritmo que permita ingresar los datos de los alumnos de una división de la UTN FRA, los datos solicitados son:
//Legajo
//Tipo cursada(L: "libre" - P: "presencial" – R: "remota")
//Cantidad de materias( mas de cero y menos de 8)
//Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
//Nota promedio (entre 0 y 10)
//Edad (validar)
//Se debe informar de existir, o informar que no existe , en el caso que corresponda.
//a) El Legajo del mejor promedio que femenino.
//b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
//c) El promedio de nota por sexo.
//d) La edad y legajo del que cursa más materias. (Sin importar su género)
//int main()
//{
//    int legajo;
//    char tipoCursada;
//    int cantidadMaterias;
//    char sexo;
//    float notaPromedio;
//    int edad;
//    char respuesta = 's';
//
//    int legajoMejorPromedio;
//    int mejorPromedioFemenino;
//
//    int legajoMasculinoJoven;
//    int edadMasculinoJoven;
//
//    int cantidadFemeninos = 0;
//    int cantidadMasculinos = 0;
//    int cantidadNobinarios = 0;
//    int acumuladorNotaFem = 0;
//    int acumuladorNotaMas = 0;
//    int acumuladorNotaNB = 0;
//    float promedioNotaFem;
//    float promedioNotaMas;
//    float promedioNotaNB;
//
//    int legajoMasMaterias;
//    int edadMasMaterias;
//    int mayorCantidadMaterias;
//    int banderasMasMaterias;
//
//    while(respuesta=='s')
//    {
//        printf("Ingrese numero de legajo: ");
//        scanf("%d", &legajo);
//
//        printf("Ingrese tipo de cursada:\nL: Libre\nP: Presencial\nR: Remota ");
//        __fpurge(stdin);
//        scanf("%c", &tipoCursada);
//        tipoCursada = toupper(tipoCursada);
//        while(tipoCursada!='L' && tipoCursada!='P' && tipoCursada!='R')
//        {
//            printf("Error. Reingrese tipo de cursada:\nL: Libre\nP: Presencial\nR: Remota ");
//            __fpurge(stdin);
//            scanf("%c", &tipoCursada);
//            tipoCursada = toupper(tipoCursada);
//        }
//
//        printf("Ingrese la cantidad de materias, mas de 0 y menos de 8: ");
//        scanf("%d", &cantidadMaterias);
//        while(cantidadMaterias<1 || cantidadMaterias>7)
//        {
//            printf("Error. Reingrese la cantidad de materias, mas de 0 y menos de 8: ");
//            scanf("%d", &cantidadMaterias);
//        }
//
//        printf("Ingrese sexo:\nF: Femenino\M: Masculino\nO: No binario ");
//        __fpurge(stdin);
//        scanf("%c", &sexo);
//        sexo = toupper(sexo);
//        while(sexo!='F' && sexo!='M' && sexo!='O')
//        {
//            printf("Error. Reingrese sexo:\nF: Femenino\nM: Masculino\nO: No binario ");
//            __fpurge(stdin);
//            scanf("%c", &sexo);
//            sexo = toupper(sexo);
//        }
//
//        printf("Ingrese la nota promedio, entre 0 y 10: ");
//        scanf("%f", &notaPromedio);
//        while(notaPromedio<0 || notaPromedio>10)
//        {
//            printf("Error. Reingrese la nota promedio, entre 0 y 10: ");
//            scanf("%f", &notaPromedio);
//        }
//
//        printf("Ingrese la edad: ");
//        scanf("%d", &edad);
//        while(edad<18)
//        {
//            printf("Error. Reingrese la edad: ");
//            scanf("%d", &edad);
//        }
//
//        switch(sexo)
//        {
//            case'F':
//                if(cantidadFemeninos == 0 || mejorPromedioFemenino<notaPromedio)
//                {
//                    mejorPromedioFemenino = notaPromedio;
//                    legajoMejorPromedio = legajo;
//                }
//                cantidadFemeninos++;
//                acumuladorNotaFem+=notaPromedio;
//            break;
//
//            case'M':
//                if(tipoCursada=='L')
//                {
//                    if(cantidadMasculinos==0 || edadMasculinoJoven>edad)
//                    {
//                        edadMasculinoJoven = edad;
//                        legajoMasculinoJoven = legajo;
//                    }
//                }
//                cantidadMasculinos++;
//                acumuladorNotaMas+=notaPromedio;
//            break;
//
//            case'O':
//                cantidadNobinarios++;
//                acumuladorNotaNB+=notaPromedio;
//            break;
//        }
//
//        if(banderasMasMaterias==1 || mayorCantidadMaterias<cantidadMaterias)
//        {
//            edadMasMaterias = edad;
//            legajoMasMaterias = legajo;
//            mayorCantidadMaterias = cantidadMaterias;
//            banderasMasMaterias = 0;
//        }
//
//        printf("¿Desea ingresar mas alumnos?");
//        __fpurge(stdin);
//        scanf("%c", &respuesta);
//        respuesta = tolower(respuesta);
//    } // ******************************************************************************************* FIN WHILE
//
//    if(cantidadFemeninos != 0)
//    {
//        promedioNotaFem = (float) acumuladorNotaFem/cantidadFemeninos;
//        printf("El legajo del mejor promedio femenino es: %d\n", legajoMejorPromedio);
//        printf("El promedio de nota del sexo femenino es: %.2f\n", promedioNotaFem);
//    }
//    else
//    {
//        printf("No se ingresaron alumnos con sexo femenino\n");
//    }
//
//    if(cantidadMasculinos != 0)
//    {
//        promedioNotaMas = (float) acumuladorNotaMas/cantidadMasculinos;
//        printf("El legajo del masculino mas joven que da libre es: %d\n", legajoMasculinoJoven);
//        printf("El promedio de nota del sexo masculino es: %.2f\n", promedioNotaMas);
//    }
//    else
//    {
//        printf("No se ingresaron alumnos con sexo masculino.\n");
//    }
//
//    if(cantidadNobinarios != 0)
//    {
//        promedioNotaNB = (float) acumuladorNotaNB/cantidadNobinarios;
//        printf("El promedio de nota del sexo no binario es: %.2f\n", promedioNotaNB);
//    }
//    else
//    {
//        printf("No se ingresaron alumnos con sexo No binario.\n");
//    }
//
//    if(banderasMasMaterias==0)
//    {
//        printf("La edad del alumno con mas materias es %d y su legajo es %d", edadMasMaterias, legajoMasMaterias);
//    }
//    else
//    {
//        printf("No se ingresaron alumnos.");
//    }
//
//    return 0;
//}



//EJERCICIO 4:
//Ingresar 10 numero enteros distintos de 0. Mostrar:
//a. Cantidad de pares e impares.
//b. El menor numero ingresado.
//c. Suma de los positivos
//d. Producto de los negativos.
int main()
{
    int numero;
    int cantidadPares = 0;
    int cantidadImpares = 0;

    int numeroMenor;
    int banderaNumeroMenor = 1;

    int acumuladorPositivos = 0;

    int productoNegativos = 1;

    for(int contador = 0; contador<10;contador++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        while(numero==0)
        {
            printf("Error. Reingrese un numero: ");
            scanf("%d", &numero);
        }

        if(numero%2==0)
        {
            cantidadPares++;
        }
        else
        {
            cantidadImpares++;
        }

        if(banderaNumeroMenor==1 || numeroMenor>numero)
        {
            numeroMenor = numero;
            banderaNumeroMenor = 0;
        }

        if(numero>0)
        {
            acumuladorPositivos+=numero;
        }
        else
        {
            productoNegativos*=numero;
        }

    }//***************************************************** FIN FOR

    printf("Cantidad de numeros pares: %d\n", cantidadPares);
    printf("Cantidad de numeros impares: %d\n", cantidadImpares);

    printf("El numero menor ingresado es: %d\n", numeroMenor);

    printf("La suma de los numeros positivos es: %d\n", acumuladorPositivos);

    printf("El producto de los negativos es: %d", productoNegativos);

    return 0;
}
