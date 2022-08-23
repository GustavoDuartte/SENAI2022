#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

	char nome[30];
	float preco, npreco;
	
	printf("Digite o nome da mercadoria: ");
	scanf("%s", &nome);
	
	printf("Digite o preço da mercadoria: ");
	scanf("%f" , &preco);
	
	if(preco<1000){
		npreco = preco + (preco * 5/100);
		printf("A mercadoria %s com aumento de 5%%, saira de %.2f para %.2f. ",nome,preco,npreco);
	}else{
		npreco = preco + (preco * 7/100);
		printf("A mercadoria %s com aumento de 7%%, saira de %.2f para %.2f. ",nome,preco,npreco);
	}
	
}
