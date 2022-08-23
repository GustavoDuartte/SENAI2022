#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i,total=0;
	
	for(i = 1; i <= 100; i++){
		total = total + i;
	}
	printf("A soma dos valores entre 0 e 100 é %d",total);
	
}
