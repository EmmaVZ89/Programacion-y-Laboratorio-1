#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main()
{
    int x = 5;
    int resultadoFactorial;

    resultadoFactorial = factorial(x);

    printf("Factorial de x: %d\n", resultadoFactorial);

    return 0;
}

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}
