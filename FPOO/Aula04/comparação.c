#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	 char cor[30], result[30];
	 
	 printf("Digite a cor do semaforo: ");
	 scanf("%s",&cor);
	 
	 if(strcmp(cor, "verde")==0){
	 	sprintf(result,"pode ir");
	 }else if(strcmp(cor, "amarelo")==0){
	 	sprintf(result,"atenção");
	 }else if(strcmp(cor, "vermelho")==0){
	 	sprintf(result,"espere");
	 }else{
	 	sprintf(result,"cor invalida");
	 }
	 
	 
	
}
