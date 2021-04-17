#include <stdio.h>
#include <stdlib.h>

#define TAM 5
#define ASC 1
#define DES 0

float calcularPromedio(int a, int b);
int calcularPromedioRef(int a, int b, float* c);
void ordenarListado(int leg[], char sex[], int n1[], int n2[], float proms[], int tam, int criterio);
void mostrarNotas(int leg[], char sex[], int n1[], int n2[], float proms[], int tam);

int main()
{
    int legajos[TAM] = {23,24,25,26,27};
    char sexos[TAM] = {'f','m','m','f','m'};
    int notas1[TAM] = {2,4,3,10,8};
    int notas2[TAM] = {7,5,10,2,5};
    float promedios[TAM];

    for(int i = 0; i < TAM; i++)
    {
//        printf("Ingrese legajo: ");
//        scanf("%d", &legajos[i]);
//
//        printf("Ingrese sexo: ");
//        fflush(stdin);
//        scanf("d", &sexos[i]);
//
//        printf("Ingrese nota primer parcial: ");
//        scanf("%d", &notas1[i]);
//
//        printf("Ingrese nota 2do parcial: ");
//        scanf("%d", &notas1[i]);

//        promedios[i] = calcularPromedio(notas1[i], notas2[i]);

        if(!calcularPromedioRef(notas1[i], notas2[i], &promedios[i]))
        {
            printf("Hubo un problema para calcular el promedio.");
        }
    }

    mostrarNotas(legajos, sexos, notas1, notas2, promedios, TAM);

    ordenarListado(legajos, sexos, notas1,notas2,promedios,TAM,DES);

    mostrarNotas(legajos, sexos, notas1, notas2, promedios, TAM);

    return 0;
}

float calcularPromedio(int a, int b)
{
    int suma;
    suma = a + b;
    return (float) suma/2;
}

int calcularPromedioRef(int a, int b, float* c)
{
    int todoOK = 0;
    int suma;

    if(c != NULL && b != 0)
    {
        suma = a + b;
        *c = (float)suma / 2;
        todoOK = 1;
    }
    return todoOK;
}


void mostrarNotas(int leg[], char sex[], int n1[], int n2[], float proms[], int tam)
{
    printf("\t*** Listado de Notas ***\n");
    printf(" Legajo     Sexo     Nota P1     Nota P2     Promedio\n");
    for(int i = 0; i < tam; i++)
    {
        printf("    %d      %c       %2d         %2d         %5.2f\n",leg[i], sex[i], n1[i], n2[i], proms[i]);
    }
    printf("\n\n");
}

void ordenarListado(int leg[], char sex[], int n1[], int n2[], float proms[], int tam, int criterio)
{
    int aux1;
    float aux2;
    char aux3;

    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i + 1; j < tam; j++)
        {
            if(criterio && proms[i] > proms[j])
            {
                aux1 = n1[i];
                n1[i] = n1[j];
                n1[j] = aux1;

                aux1 = n2[i];
                n2[i] = n2[j];
                n2[j] = aux1;

                aux1 = leg[i];
                leg[i] = leg[j];
                leg[j] = aux1;

                aux2 = proms[i];
                proms[i] = proms[j];
                proms[j] = aux2;

                aux3 = sex[i];
                sex[i] = sex[j];
                sex[j] = aux3;
            }
            else if (proms[i] < proms[j] && !criterio)
            {
                aux1 = n1[i];
                n1[i] = n1[j];
                n1[j] = aux1;

                aux1 = n2[i];
                n2[i] = n2[j];
                n2[j] = aux1;

                aux1 = leg[i];
                leg[i] = leg[j];
                leg[j] = aux1;

                aux2 = proms[i];
                proms[i] = proms[j];
                proms[j] = aux2;

                aux3 = sex[i];
                sex[i] = sex[j];
                sex[j] = aux3;
            }
        }
    }
}
