#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

/*
    Debemos realizar la carga de 5(cinco) productos de prevención de contagio,
    de cada una debo obtener los siguientes datos:
    el tipo (validar "barbijo" , "jabón" o "alcohol") ,
    el precio (validar entre 100 y 300),
    la cantidad de unidades (no puede ser 0 o negativo y no debe superar las 1000 unidades),
    la Marca y el fabricante.
    Se debe Informar al usuario lo siguiente:
    a) Del más barato de los alcohol, la cantidad de unidades y el fabricante
    b) Del tipo con mas unidades, el promedio por compra
    c) Cuántas unidades de jabones hay en total
*/

    char tipo;
    char marca;
    char fabricante;

    int precio;
    int unidades;
    int contador;
    int contadorBarbijo;
    int contadorJabon;
    int contadorAlcohol;
    int acumuladorBarbijo;
    int acumuladorJabon;
    int acumuladorAlcohol;

    float promedioMayorCantidad;

    contador = 0;
    contadorBarbijo = 0;
    contadorJabon = 0;
    contadorAlcohol = 0;
    acumuladorBarbijo = 0;
    acumuladorJabon = 0;
    acumuladorAlcohol = 0;

    while(contador < 1)
    {
        printf("Ingrese el tipo de producto: \n");
        scanf(" %c", &tipo);
        while(tipo != 'b' && tipo != 'j' && tipo != 'a')
        {
            printf("Error. Ingrese el tipo de producto: \n");
            fflush(stdin);
            scanf(" %c", &tipo);
        }

        printf("Ingrese el precio: \n");
        scanf("%d", &precio);
        while(precio < 100 || precio > 300)
        {
            printf("Error. Ingrese el precio: \n");
            scanf("%d", &precio);
        }

        printf("Ingrese unidades: \n");
        scanf("%d", &unidades);
        while(unidades < 1 || unidades > 1000)
        {
            printf("Error. Ingrese unidades: \n");
            scanf("%d", &unidades);
        }

        printf("Ingrese la marca: \n");
        fflush(stdin);
        scanf(" %c", &marca);
        while(!(isalpha(marca)))
        {
            printf("Error. Ingrese la marca: \n");
            fflush(stdin);
            scanf(" %c", &marca);
        }

        printf("Ingrese el fabricante: \n");
        fflush(stdin);
        scanf(" %c", &fabricante);
        while(!(isalpha(fabricante)))
        {
            printf("Ingrese el fabricante: \n");
            fflush(stdin);
            scanf(" %c", &fabricante);
        }

        switch(tipo)
        {
            case'b':
                contadorBarbijo++;
                acumuladorBarbijo+=unidades;
            break;

            case'j':
                contadorJabon++;
                acumuladorJabon+=unidades;
            break;

            case'a':
                contadorAlcohol++;
                acumuladorAlcohol+=unidades;
            break;
        }


        contador++;
    }

    if(acumuladorBarbijo > acumuladorJabon && acumuladorBarbijo > acumuladorAlcohol)
    {
        promedioMayorCantidad = acumuladorBarbijo/contadorBarbijo;
    }
    else
    {
        if(acumuladorJabon > acumuladorAlcohol)
        {
            promedioMayorCantidad = acumuladorJabon/contadorJabon;
        }
        else
        {
            promedioMayorCantidad = acumuladorAlcohol/contadorAlcohol;
        }
    }

    printf("El promedio por compra del tipo con mas unidades: %.2f \n", promedioMayorCantidad);

    printf("Cantidad de jabones: %d", acumuladorJabon);

    return 0;
}
