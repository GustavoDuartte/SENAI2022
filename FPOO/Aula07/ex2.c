#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"");
	
	char nomes[5][30];
	int i, j, vit[5],emp[5],ptime[5],aux;
	char auxn[5][30];
		
	for(i = 0; i < 5; i++){
		printf("Digite o nome do %do. time: ",i+1);
		gets(nomes[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("Digite o numero de vitorias do %do. time: ",i+1);
		scanf("%d",&vit[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("Digite o numero de empates do %do. time: ",i+1);
		scanf("%d",&emp[i]);
		ptime[i] = (vit[i] * 3) + emp[i];
	}
	printf("\n");
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			if(ptime[i] > ptime[j]){
				aux = ptime[i];
				ptime[i] = ptime[j];
				ptime[j] = aux;
				
				strcpy(auxn,nomes[i]);
				strcpy(nomes[i],nomes[j]);
				strcpy(nomes[j],auxn);
			}
		}
	}
	for(i = 0; i < 5; i++){
		printf("[ %s ] total de pontos : [ %d ]\n",nomes[i],ptime[i]);
	}
	
		
}
