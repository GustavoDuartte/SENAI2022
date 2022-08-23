#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	//contar até 10 com for
	
	int i;
	
	for(i = 10; i <= 200; i++){
		printf("%d\n",i);
	}
	
}
