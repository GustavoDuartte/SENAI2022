#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	
	int aux = 0, i, j, val[10];
	
	for( i = 0; i < 10; i++){
		printf("Digite o %do. valor: ",i+1);
		scanf("%d",&val[i]);
	}
	
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if(val[i]<val[j]){
				aux = val[i];
				val[i] = val[j];
				val[j] = aux;
			}
		}
	}
		
	
	for(i = 0; i < 10; i++){
		printf("{ %d }",val[i]);
	}
	
			
}
