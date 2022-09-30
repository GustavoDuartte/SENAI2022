#include<stdio.h>
#include<locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	
	char nomes[6][30],auxn[30];
	int i,j,aux;
	float porc[6],t,num[6];
	
	printf("Digite os nomes dos 6 candidatos e total de votos de cada um: \n");
	for(i = 0; i < 6; i++){
		scanf("%s%f",&nomes[i],&num[i]);
	}
	
	for(i = 0; i < 6; i++){
		t += num[i];
	}
	for(i = 0; i < 6; i++){
		if(num[i] > t/2){	
		printf("\nTera segundo turno.\n");
		break;
		}else if(num[i] < t/2){
			printf("\nNao tera segundo turno.\n");
		}
	}
		
	
	for(i = 0; i < 6; i++){
		porc[i] = (num[i] / t)*100;
	}
	printf("\nO total de votos foram: %.0f\n",t);
	printf("\n");
	for(i = 0; i < 6; i++){
		printf("%s teve %.1f%% dos votos. \n",nomes[i],porc[i]);
	}
	
	for (i = 0; i < 6; i++){
		for (j = i+1; j < 6; j++){
			if(num[i]<num[j]){
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}
	
	for (i = 0; i < 6; i++){
		for (j = i+1; j < 6; j++){
			if(strcmp(nomes[i],nomes[j])>0){
				strcpy(auxn, nomes[i]);
				strcpy(nomes[i], nomes[j]);
				strcpy(nomes[j], auxn);
			}
		}
	}
	
	printf("\nO primeiro colocado é %s com %.0f de votos. \n",nomes[0],num[0]);
	printf("\nSegue abaixo a lista dos candidatos. \n");
	printf("\n");
	for(i = 0; i < 6; i++){
		printf("%d- %s com %0.f de votos\n",i+1,nomes[i],num[i]);
	}
	
}
