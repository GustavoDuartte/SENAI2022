#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

	//contar at� 10 com while

	int i = 1;
	while(i <= 10){
		printf("%d\n",i);
		i++;
	}
	
}
