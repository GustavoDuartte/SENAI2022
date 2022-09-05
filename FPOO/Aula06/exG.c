#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i,j;
	char aux[30];
	char nomes[5][30];
	
	for(i = 0; i < 5; i++){
		printf("Digite o %do. nome: ",i+1);
		gets(nomes[i]);
	}
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			if(nomes[i][0] < nomes[j][0]){
				strcpy(aux,nomes[i]);
				strcpy(nomes[i],nomes[j]);
				strcpy(nomes[j],aux);
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("[%d]%s\n",i+1,nomes[i]);
	}
	
}
