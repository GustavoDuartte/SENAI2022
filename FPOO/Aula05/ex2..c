#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	//contar até 10 com for
	
	int i;
	
	for(i = 200; i >= 1; i--){
		printf("%d\n",i);
	}
	
}
