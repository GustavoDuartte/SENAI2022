#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int vet[10];
	
	for(i = 0; i < 10; i++){
		printf("Digite os valores: ");
		scanf("%d",&vet[i]);
	}
	printf("\nInforme a casa para saber o valor dela: ");
	scanf("%d",&i);
	printf("o valor [%d] esta na casa [%d]\n",vet[i],i);
	
}

