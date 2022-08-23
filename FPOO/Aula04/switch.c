#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int cor;
	
	printf("Digite a cor do semaforo \n 1-verde  \n 2-amarelo  \n 3-vermelho :");
	scanf("%d", &cor);
	
	switch(cor){
		case 1:
			printf("Voce escolheu verde, pode ir. \n");
		break;
		case 2:
			printf("Voce escolheu amarelo, atenção. \n");
		break;
		case 3:
			printf("Voce escolheu vermelho, espere. \n");
		break;
		default:
			printf("Cor invalida\n");
		
	}
	printf("fim");
	
}
