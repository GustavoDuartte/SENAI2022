#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int vet[10], i, somaPar=0, mediaPar = 0, mediaImpar = 0, somaImpar = 0, contPar = 0 , contImpar = 0;
	
	for(i = 0; i < 10; i++ ){
		do{
		printf("Digite o %do. valor par ou impar: ",i+1);
		scanf("%d", &vet[i]);
		
		}while(vet[i] < 0 || vet[i] > 1000);
	}
	for(i = 0; i < 10; i++ ){
		if(vet[i] % 2 == 0){
			somaPar += vet[i] ;
			contPar++;
		}else{
			somaImpar += vet[i];
			contImpar++;
		}
	}
	
	if(contPar !=0) mediaPar = somaPar / contPar;
	if(contImpar !=0) mediaImpar = somaImpar / contImpar;
	
	printf("\n");
	printf("A soma dos pares= { %d } e a media= { %d }\n", somaPar, mediaPar);
	printf("\nA soma dos impares= { %d } e a media= { %d }\n", somaImpar, mediaImpar );
	printf("\nO total de numeros Pares: { %d }\n", contPar );
	printf("\nO total de numeros Impares: { %d }\n",contImpar );
	
}
