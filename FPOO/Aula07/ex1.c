#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL,"");
	char nomes[5][20];
	float sal[5], nsal[5],rea;
	int i;
	
	//Entrada
	for(i = 0; i < 5; i++){
		printf("Digite o nome do %do. funcionario: ",i+1);
		gets(nomes[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("Digite o salario do %do. funcionario: ",i+1);
		do{
			scanf("%f",&sal[i]);
		}while(sal[i] < 0 || sal[i] > 1000000);	
	}
	printf("\n");
		printf("Digite o percentual de reajuste: ");
		do{
			scanf("%f",&rea);
		}while(rea < 0 || rea > 1000000);		
	printf("\n");
	for(i = 0; i < 5; i++){
		sal[i] = sal[i] * rea / 100 + sal[i];
		printf("[ %s ] novo salario R$%.2f\n",nomes[i],sal[i]);
	}
	
}
