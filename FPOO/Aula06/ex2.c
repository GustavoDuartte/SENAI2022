#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	int vet[10],somap=0,somai=0,mediap=0,mediai=0,tp=0,ti=0;
	
	for (i = 0; i < 10; i++){
		printf("Digite os valores: ");
		scanf("%d",&vet[i]);
}
	for(i = 1; i <= 10; i++){
		if (vet[i]%2==0){
			somap += vet[i];
			tp++;
		}else{
			somai += vet[i];
			ti++;
		}
	}
	
	
	printf("A soma dos pares é :%d e a media: %d\n",somap,somap/tp);
	printf("A soma dos impares é: soma: %d e a media: %d\n",somai,somai/ti);
	printf("O total de pares é: %d\n",tp);
	printf("O total de impares é: %d\n",ti);
	
}
