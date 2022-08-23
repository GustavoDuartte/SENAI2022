#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    
    if(a == b && a == c){
        printf("Equilatero\n");
    }else if(a == b || a == c || b == c){
        printf("Isosceles\n");
    }else{
        printf("Escaleno\n");
    }
    
}
	

