#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	
	int aux, i, val[10];
	
	for( i = 0; i < 10; i++){
		printf("Digite o %do. valor: ",i);
		scanf("%d",&val[i]);
	}
		
	for( i = 0; i < 10; i+=2){
		aux = val[i];
		val[i] = val[9-i];
		val[9-i] = aux;
	}
	
	for(i = 0; i < 10; i++){
		printf("{ %d }",val[i]);
	}
	
			
}
