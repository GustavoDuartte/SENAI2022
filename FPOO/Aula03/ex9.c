#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float  preco, novopreco;
	char produto[20];
	
	printf("Mercadoria : ");
	fflush(stdin);
	gets(produto);
	printf("Pre�o da mercadoria: R$");
	fflush(stdin);
	scanf("%f", &preco);
	
	
	novopreco = preco + (preco * 5 / 100);
	
	printf("A %s teve um aumento de 5%% e ter� um novo pre�o de : R$%.2f", produto, novopreco );
	
}
