#include <stdio.h>

int main(void)
{
    char texto[50];
    char aux;
    int len = 0; // Tamanho da string

    printf("Digite uma frase curta ou uma palavra:\n");

    fgets(texto, sizeof(texto), stdin); // Pegar a string ou texto do usuário

    while(texto[len] != '\0' && texto[len] != '\n') // Conta qual é o tamanho da string
    {
        len++;
    }

    for(int i = 0, j = len - 1; i < j; i++, j--) // Técnica dos dois ponteiros
    {
        aux = texto[i];
        texto[i] = texto[j];
        texto[j] = aux;
    }

    printf("%s", texto);
}