#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");

	int i, val[100], j, aux; 
	
	srand(time(NULL));
	
	 for (i=0; i < 100; i++){
    val[i]=rand() % 1000;
  }
  
  	for (i = 0; i < 100; i++){
		for (j = 0; j < 100; j++){
			if(val[i]<val[j]){
				aux = val[i];
				val[i] = val[j];
				val[j] = aux;
			}
		}
	}
	
	for(i = 0; i < 100; i++){
		printf("[%d]\t",val[i]);
	}
	getch();
	return 0;
}
