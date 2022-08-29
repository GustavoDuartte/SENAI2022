#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i,j,aux;
	int vet[6];
	
	for(i = 0; i < 6; i++){
		printf("Digite os valores: ",i);
		scanf("%d",&vet[i]);
	}
	
//	for (i = 1; i <= 6; i++){
//		for (j = 1; j <=6; j++){
//			if(vet[i]>vet[j]){
//				aux = vet[i];
//				vet[i] = vet[j];
//				vet[j] = aux;
//			}
//		}
//	}

	for( i = 0; i < 6; i+=2){
		aux = vet[i];
		vet[i] = vet[5-i];
		vet[5-i] = aux;
	}
	
	for( i = 0; i < 6; i++){
		printf("{ %d }",vet[i]); 
	}

}

