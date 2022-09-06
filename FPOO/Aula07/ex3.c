#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL,"");
	
	char nomes[5][30];
	int i;
	float prec[5];
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome da %da. mercadoria: ",i+1);
		gets(nomes[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("Digite o preço da %da. mercadoria: R$",i+1);
		scanf("%f",&prec[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		if(prec[i] < 1000){
			prec[i] = prec[i] + prec[i]*5/100;
		}else{
			prec[i] = prec[i] + prec[i]*7/100;
		}
		printf("[ %s ] com novo preço será: %.2f\n",nomes[i],prec[i]);
	}
	
}
