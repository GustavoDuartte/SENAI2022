#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int m[5][5],i,j, contPar = 0 , contImpar = 0;
	srand(time(NULL));
	for(i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			m[i][j]=rand()%51;
		}
	}
	for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		printf("[%d]\t",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			if(m[i][j] % 2 == 0){
				contPar++;
				printf("Numeros Pares [%d][%d] = %d\n",i,j,m[i][j]);
			}else{
				contImpar++;
				printf("Numeros Impares [%d][%d] = %d\n",i,j,m[i][j]);
			}
		}
		printf("\n");
	}
	
	printf("\nO total de numeros Pares: { %d }\n", contPar );
	printf("\nO total de numeros Impares: { %d }\n",contImpar );
	
}
