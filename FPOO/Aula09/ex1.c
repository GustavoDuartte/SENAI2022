#include<stdio.h>
#include<locale.h>
#include<time.h>

void sorteio(char nomes[10][30]){
	srand(time(NULL));
	int i,num;
	
	for(i = 0; i < 10; i++){
		printf("Digite o %do. nome: ",i+1);
		gets(nomes[i]);
	}
	num = rand() % 10;
	
	printf("O nome sorteado foi %s",nomes[num]);
	
}

void main(){
	char nomes[10][30];
	
	sorteio(nomes[10]);
}
