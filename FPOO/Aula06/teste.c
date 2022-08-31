#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	
	char nomes[5][20];
	strcpy(nomes[0],"Joaquin");
	strcpy(nomes[1],"Marcos");
	strcpy(nomes[2],"Bruno");
	strcpy(nomes[3],"Ana");
	strcpy(nomes[4],"Maria");
	
	for(i = 0; i < 5; i++){
		printf("%s\n",nomes[i]);
	}
	
	printf("%c",nomes[0][3]);
}
