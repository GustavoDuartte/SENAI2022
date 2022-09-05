#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, num, contp;
	int vet[50];
	int p[50];
	
	srand(time(NULL));
	
	for(i = 0; i < 50; i++){
		vet[i] = rand() % 100;
		printf("[%d]%d\n",i,vet[i]);
	}
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	for(i = 0; i < 50; i++){
		if(vet[i]==num){
			p[contp] = i;
			contp++;
		}
	}
	
	if(contp > 0){
		for(i = 0; i < contp; i++)
	 printf("{ Acho na posição %d }\n",p[i]);
	}else{
	 printf("{ Acho não }\n");
	}
	
}

