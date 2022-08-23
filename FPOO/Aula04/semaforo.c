#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int cor;
	
	printf("Selecione a cor do semaforo: \n");
	printf("1-Verde \n");
	printf("2-Vermelho \n");
	printf("3-Amarelo \n");
	scanf("%d", &cor);
	
	if (cor == 1){
		printf("Pode ir");
	}else if(cor == 2){
		printf("Não vá");
	}else if(cor == 3){
		printf("atenção");
	}else{
		printf("Vaza daqui seu feio");
	}
	
	
}
