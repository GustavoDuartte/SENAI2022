#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int vet2[5],vet1[5];
	
	for ( i = 0; i < 5; i++){
		printf("Digite os valores do primeiro vetor: ",i);
		scanf("%d",&vet1[i]);
	}
	printf("\n");
	for ( i = 0; i < 5; i++){
		printf("Digite os valores do segundo vetor: ",i);
		scanf("%d",&vet2[i]);
	}
	
	printf("{ %d }\n",vet1[0]+vet2[4]);
	printf("{ %d }\n",vet1[1]+vet2[3]);
	printf("{ %d }\n",vet1[2]+vet2[2]);
	printf("{ %d }\n",vet1[3]+vet2[1]);
	printf("{ %d }\n",vet1[4]+vet2[0]);
		
}
