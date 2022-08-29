#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int vet2[5],vet1[5];
	
	for ( i = 0; i < 5; i++){
		printf("Digite o %do. valor do primeiro vetor: ",i + 1);
		scanf("%d",&vet1[i]);
	}
	printf("\n");
	printf("---------------------------------------\n");
	for ( i = 0; i < 5; i++){
		printf("Digite o %do. valor do segundo vetor: ",i + 1);
		scanf("%d",&vet2[i]);
	}
	printf("---------------------------------------\n");
	
	printf("A conta de %d + %d ficara : { %d }\n",vet1[0],vet2[4],vet1[0]+vet2[4]);
	printf("A conta de %d + %d ficara : { %d }\n",vet1[1],vet2[3],vet1[1]+vet2[3]);
	printf("A conta de %d + %d ficara : { %d }\n",vet1[2],vet2[2],vet1[2]+vet2[2]);
	printf("A conta de %d + %d ficara : { %d }\n",vet1[3],vet2[1],vet1[3]+vet2[1]);
	printf("A conta de %d + %d ficara : { %d }\n",vet1[4],vet2[0],vet1[4]+vet2[0]);
		
}
