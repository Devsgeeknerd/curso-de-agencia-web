#include <stdio.h>
#include <stdlib.h>

// Função principal do programa.
void main()
{ // Variável para armazenar o número digitado pelo usuário.
    int numero;
    // Inicializa a variável 'divisao' que contará os divisores do número.
    int divisao = 0;

    // Solicita ao usuário que digite um número.
    printf("Digite um numero: ");
    // Lê o número digitado e armazena na variável 'numero'.
    scanf("%d", &numero);

    // Loop que itera de 1 até o número digitado.
    for (int i = 1; i <= numero; i++)
    {
        // Verifica se 'i' é um divisor de 'numero'.
        if (numero % i == 0)
        {
            // Se for divisor, incrementa o contador 'divisao'.
            divisao++;
        }
    }

    // Verifica se o número de divisores é igual a 2.
    if (divisao == 2)
    {
        // Se o número tem exatamente 2 divisores, é primo.
        printf("O Numero %d é primo.", numero);
    }
    else
    {
        // Caso contrário, não é primo.
        printf("O numero %d não é primo.", numero);
    }
    // Retorna 0 para indicar que o programa terminou com sucesso.
    return 0;
}
