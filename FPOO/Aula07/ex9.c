#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int m[5][5],par[25],imp[25],im,p, i,j, contPar = 0 , contImpar = 0;
	srand(time(NULL));
	for(i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			m[i][j]=rand()%50;
		}
	}
	
	for(i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			if(m[i][j] % 2 == 0){
				p = m[i][j];
				contPar++;
			}else{
				im = m[i][j];
				contImpar++;
			}
		}
		par[i]=p;
		imp[i]=im;
	}
	for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		printf("[%d]\t",m[i][j]);
		}
		printf("\n");
	}
	
	printf("\nOs numeros pares são: \n");
	for(i = 0; i < contPar; i++){
		printf("[%d]\n",par[i]);	
	}
	printf("\nO total de numeros Pares: { %d }\n", contPar );
	printf("\nO total de numeros Impares: { %d }\n",contImpar );
	
}
