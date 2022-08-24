#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int vet[10], i, somaPar=0, somaImpar = 0, mediaPar = 0, mediaImpar = 0, contPar = 0 , contImpar = 0;
	
	for(i = 1; i < 11; i++ ){
		printf("Digite o %do. valor: ",i);
		scanf("%d", &vet[i]);
	}
	for(i = 1; i < 11; i++ ){
		if(vet[i] % 2 == 0){
			somaPar += vet[i] ;
			contPar++;
		}else{
			somaImpar += vet[i];
			contImpar++;
		}
	}
	
	printf("\n");
	printf("A soma dos pares= { %d } e a media= { %d }\n", somaPar, (somaPar / contPar));
	printf("\nA soma dos impares= { %d } e a media= { %d }\n", somaImpar, (somaImpar / contImpar));
	printf("\nO total de numeros Pares: { %d }\n", contPar );
	printf("\nO total de numeros Impares: { %d }\n",contImpar );
	
}