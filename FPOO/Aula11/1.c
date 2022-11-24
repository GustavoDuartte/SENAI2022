#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char nomes[5][30], velho[30];
	int idades[5], idadeVelho = 0,i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome e a idade da %do. pessoa: ",i+1);
		scanf("%s%d",&nomes[i],&idades[i]);
		
		if(idades[i] > idadeVelho){
			idadeVelho = idades[i];
			strcpy(velho, nomes[i]);
		}
		
	}
	
	printf("A pessoa mais velha é %s com %d anos.",velho,idadeVelho);
	
}
