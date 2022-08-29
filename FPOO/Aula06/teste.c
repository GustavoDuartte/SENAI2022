#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int opc[5],result,i;
	
	opc[1] = -1;
	opc[2] = -1;
	opc[3] = -1;
	opc[4] = -1;
	opc[5] = -1;
	
	printf("1 - SIM / 0 - NÃO\n");
	
	while(opc[1] < 0 || opc[1] > 1){
		printf("Telefonou para a vitima? : ");
		scanf("%d",&opc[1]);
	}
	while(opc[2] < 0 || opc[2] > 1){
		printf("Esteve no local do crime? : ");
		scanf("%d",&opc[2]);
	}
	while(opc[3] < 0 || opc[3] > 1){
		printf("Mora perto da vitima? : ");
		scanf("%d",&opc[3]);
	}
	while(opc[4] < 0 || opc[4] > 1){
		printf("Devia para a vitima? : ");
		scanf("%d",&opc[4]);
	}
	while(opc[5] < 0 || opc[5] > 1){
		printf("Ja trabalhou com a vitima? : ");
		scanf("%d",&opc[5]);
	}
	
	while(i <= 5){
		result = result + opc[i];
		i++;
	}
	
	printf("---------CONCLUSÃO---------\n");
	
	if(result == 2){
		printf("SUSPEITO\n");
	}else if(result == 3 || result == 4){
		printf("CUMPLICE\n");
	}else if(result == 5){
		printf("ASSASSINO\n");
	}else{
		printf("LIBERADO\n");
	}
	printf("%d",result);
	
	}
