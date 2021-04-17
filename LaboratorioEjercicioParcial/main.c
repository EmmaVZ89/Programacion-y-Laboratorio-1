#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define CANT_REP 2
// Directivas de preprocesador

/*
    Debemos realizar la carga de una compra de 5(cinco)
     productos de prevención de contagio
    De cada uno debo obtener los siguientes datos:
    el nombre del producto
    el tipo de producto (validar "ALCOHOL" , "IAC" o "QUAT") ,
    el precio (validar entre 100 y 300),
    la cantidad de unidades (no puede ser 0 o negativo y no debe
     superar las 1000 unidades),
    el tipo de inflamable("ignífugo", "combustible", "explosivo" )
    y la Marca
    Se debe informar al usuario lo siguiente:

    a) El promedio de cantidad por tipo de producto
    b) El tipo de inflamable con más cantidad de unidades en total
     de la compra
    c) Cuántas unidades de IAC con precios menores a 200
    (inclusive) se compraron en total
    d) La marca y tipo del más caro de los productos
*/
int main()
{
    char nombre;
    char tipoProducto;
    float precio;
    int cantidad;
    char inflamable;
    char marca;

    float promA = 0;
    float promI = 0;
    float promQ = 0;
    int acumA = 0;
    int acumI = 0;
    int acumQ = 0;
    int contA = 0;
    int contI = 0;
    int contQ = 0;

    int acumIg = 0;
    int acumExp = 0;
    int acumComb = 0;
    char infMayorCant;

    int contIACBarato = 0;

    float mayorPrecio;
    char mayorMarca;
    char mayorTipo;
    int flag = 1;

    for(int i=0; i < CANT_REP; i++)
    {
        printf("Ingrese nombre: ");
        __fpurge(stdin);
        scanf("%c", &nombre);

        printf("Ingrese tipo de producto A/I/Q: ");
        __fpurge(stdin);
        scanf("%c", &tipoProducto);
        tipoProducto = toupper(tipoProducto);
        while(tipoProducto!='A' && tipoProducto!='I' && tipoProducto!='Q')
        {
            printf("Error. Ingrese tipo de producto A/I/Q: ");
            __fpurge(stdin);
            scanf("%c", &tipoProducto);
            tipoProducto = toupper(tipoProducto);
        }

        printf("Ingrese cantidad: ");
        scanf("%d", &cantidad);
        while(cantidad <= 0 || cantidad > 1000)
        {
            printf("Error. Reingrese cantidad: ");
            scanf("%d", &cantidad);
        }

        printf("Ingrese precio: ");
        scanf("%f", &precio);
        while(precio < 100 || precio > 300)
        {
            printf("Error. Ingrese precio: ");
            scanf("%f", &precio);
        }

        printf("Ingrese el tipo de inflamable I/C/E: ");
        __fpurge(stdin);
        scanf("%c", &inflamable);
        inflamable = toupper(inflamable);
        while(inflamable!='I' && inflamable!='C' && inflamable!='E')
        {
            printf("Error. Ingrese el tipo de inflamable I/C/E: ");
            __fpurge(stdin);
            scanf("%c", &inflamable);
            inflamable = toupper(inflamable);
        }

        printf("Ingrese la marca: ");
        __fpurge(stdin);
        scanf("%c", &marca);
        marca = toupper(marca);


        switch(tipoProducto)
        {
            case'A':
                contA++;
                acumA+=cantidad;
            break;

            case'I':
                contI++;
                acumI+=cantidad;
                if (precio <= 200)
                {
                    contIACBarato+=cantidad;
                }
            break;

            case'Q':
                contQ++;
                acumQ+=cantidad;
            break;
        }

        switch(inflamable)
        {
            case'I':
                acumIg+=cantidad;
            break;

            case'C':
                acumComb+=cantidad;
            break;

            case'E':
                acumExp+=cantidad;
            break;
        }

        if(flag == 1 || mayorPrecio<precio)
        {
            mayorPrecio = precio;
            mayorMarca = marca;
            mayorTipo = tipoProducto;
            flag = 0;
        }



    }//*************************************************** FIN WHILE

    if(contA!=0)
    {
        promA = (float) acumA/contA;
    }
    printf("El promedio de alcohol es: %.2f\n", promA);

    if(contI!=0)
    {
        promI = (float) acumI/contI;
    }
    printf("El promedio de IAC es: %.2f\n", promI);

    if(contQ!=0)
    {
        promQ = (float) acumQ/contQ;
    }
    printf("El promedio de QUAC es: %.2f\n", promQ);

    if(acumIg>acumComb && acumIg>acumExp)
    {
        infMayorCant = 'I';
    }
    else
    {
        if(acumComb>acumExp)
        {
            infMayorCant = 'C';
        }
        else
        {
            infMayorCant = 'E';
        }
    }
    printf("El tipo de inflamable con mas cantidad: %c\n", infMayorCant);

    printf("Cantidad de IAC con precio menor a 200(inclusive): %d\n", contIACBarato);

    printf("La marca y tipo del más caro de los productos es: %c y %c", mayorMarca, mayorTipo);

    return 0;
}
