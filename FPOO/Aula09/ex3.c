#include <stdio.h>
#include <locale.h>
#include <time.h>

void sorteio(char nomes[40][30]){
	srand(time(NULL));
	
	int i, sorteado, num;
	
	printf("Digite 40 times para sortear: \n");
	
	for(i = 0; i < 10; i++){
		gets(nomes[i]);	
	}
	
	printf("Digite quantos times cada grupo vai ter: ");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		sorteado = rand() % 10;
		printf("O sorteado foi : %s\n", nomes[sorteado]);
	}
	
}
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[10][30];
	
	sorteio(nomes[10]);
}


