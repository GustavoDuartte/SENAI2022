#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, num;
	int vet[50];
	
	srand(time(NULL));
	
	for(i = 0; i < 50; i++){
		vet[i] = rand() % 100;
		printf("[%d]%d\n",i,vet[i]);
	}
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	for(i = 0; i < 50; i++){
		if(vet[i]==num){
		break;
		}
	}
	
	if(i != -1){
	 printf("{ Acho na posição %d %d }\n",i);
	}else{
	 printf("{ Acho não }\n");
	}
	
}

