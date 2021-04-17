#include <stdio.h>
#include <stdlib.h>

int factorialRec(int n);

int main()
{
    int x = 5;
    int resultadoFactorial;

    resultadoFactorial = factorialRec(x);

    printf("Factorial de %d: %d\n", x, resultadoFactorial);

    return 0;
}

int factorialRec(int n)
{
    int fact;

    if(n == 1 || n == 0)
    {
        fact = 1;
    }
    else
    {
        fact = n * factorialRec(n-1);
    }
    return fact;
}
