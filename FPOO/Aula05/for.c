#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	//contar até 10 com for
	
	int i;
	
	for(i = 0 ; i <= 10; i+=2){
		printf("%d\n",i);
	}
	
}
