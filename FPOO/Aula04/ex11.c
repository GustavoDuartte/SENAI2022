#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	float prec, nprec;
	
	printf("Escolha o produto \n [1-Camisa] \n [2-Bermuda] \n [3-Calça]\n:");
	scanf("%d",&num);
	
	printf("Digite o preço do produto: ");
	scanf("%f",&prec);
	
	switch (num){
		case 1:
			nprec = prec - (prec * 20/100);
			printf("Com o desconto de 20%% o valor da camisa passara de R$%.2f para R$%.2f. ",prec,nprec);
			break;
		case 2:
			nprec = prec - (prec * 10/100);
			printf("Com o desconto de 10%% o valor da bermuda passara de R$%.2f para R$%.2f. ",prec,nprec);
			break;
		case 3:
			nprec = prec - (prec * 15/100);
			printf("Com o desconto de 15%% o valor da calça passara de R$%.2f para R$%.2f. ",prec,nprec);
			break;
		default:
			printf("Item invalido");
	}
	printf("Fim");
	
}
