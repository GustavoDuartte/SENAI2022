#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i,j,aux;
	char nomes[5][30];
	
	for(i = 0; i < 5; i++){
		printf("Digite o %do. nome: ",i+1);
		scanf("%s",&nomes[i]);
	}
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			if(nomes[i]<nomes[j]){
				aux = nomes[i];
				nomes[i] = nomes[j];
				nomes[j] = aux;
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("[%d]%s\n",i,nomes[i]);
	}
	
}
