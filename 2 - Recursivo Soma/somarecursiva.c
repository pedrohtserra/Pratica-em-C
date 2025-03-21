#include <stdio.h>

int soma(int n);

int main(void)
{
    int numero = 0;

    printf("Numero: ");
    scanf("%d", &numero);

    printf("Resultado: %d", soma(numero));
}

int soma(int n)
{
    if (n != 0)
    {
        return n + soma(n - 1);
    }
    else {
        return n;
    }
}