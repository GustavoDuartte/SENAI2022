#include <stdio.h>
#include <locale.h>

int idade(int num){
	
	int dia, mes, ano, diah, mesh, anoh;
	
	printf("Digite o dia, mes e o ano de seu nascimento respectivamente: ");
	scanf("%d%d%d", &dia, &mes, &ano);
	
	printf("Digite o dia, mes e o ano atual respectivamente: ");
	scanf("%d%d%d", &diah, &mesh, &anoh);	
	
	if(mesh < mes){
		ano = (anoh - ano) - 1;
	}else if (mesh == mes){
		if(diah < dia){
			ano = (anoh - ano) - 1;
		}else if(diah == dia){
			ano = anoh - ano;
			printf("Feliz Aniversario!!!\n");
		}else if(diah > dia){
			ano = anoh - ano;
		}
	}else if(mesh > mes){
		ano = anoh - ano;
	}
	
	printf("Voce tem %d anos de idade.\n", ano);
	
	return ano;
}
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	idade(num);
		
}
