#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char mercadoria[10][30];
    float preco[10], perc[10], npreco[10];
    int i;

    for(i = 1; i <=10; i++){
        printf("Digíte a %do mercadoria: ", i);
        scanf("%s", &mercadoria[i]);
    }
    for(i = 1; i <=10; i++){
        printf("Digíte o preço da %do mercadoria: R$ ", i);
        scanf("%f", &preco[i]);
    }
    for(i = 1; i <=10; i++){
        printf("Digíte o índice percentual(%) da %do mercadoria: ", i);
        scanf("%f", &perc[i]);
    }
    for(i = 1; i <=10; i++){
        npreco[i] = preco[i] - preco[i] * perc[i] / 100;
        printf("Mercadoria: %s\nPreço Original: R$ %.2f\nDesconto(%): %.2f\nPreço Final: %.2f\n", mercadoria[i], preco[i], perc[i], npreco[i]);
        printf("------------------------------------------------------\n");

    }
}
