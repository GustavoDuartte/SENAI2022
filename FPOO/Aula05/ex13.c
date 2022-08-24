#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, j, aux;
	int vet[6];
	
	for (i = 1; i <= 5; i++){ 
		printf("Digite o %do. numero: ",i);
		scanf("%d",&vet[i]);
	}
	for (i = 1; i <= 4; i++){
		for (j = i+1; j <=5; j++){
			if(vet[i]>vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
	for( i = 1; i <= 5; i++){
		printf("{ %d }",vet[i]); 
	}
	
}
