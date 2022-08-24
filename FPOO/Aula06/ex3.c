#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int vet[6];
	
	for(i = 0; i < 6; i++){
		printf("Digite os valores do vetor: ");
		scanf("%d",&vet[i]);
	}
	
	for(i = 5; i >= 0; i--){
		printf("{ %d }\n",vet[i]);
	}

}

