#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int a,b,c,d,e,f;
	
	printf("[1]Digite um numero: ");
	scanf("%d",&a);
	printf("[2]Digite um numero: ");
	scanf("%d",&b);
	printf("[3]Digite um numero: ");
	scanf("%d",&c);
	printf("[4]Digite um numero: ");
	scanf("%d",&d);
	printf("[5]Digite um numero: ");
	scanf("%d",&e);
	printf("[6]Digite um numero: ");
	scanf("%d",&f);
	
	if(a > b && a > c && a > d && a > e && a > f){
		printf("O maior numero é %d",a);
	}else if(b > a && b > c && b > d && b > e && b > f){
		printf("O maior numero é %d",b);
	}else if(c > a && c > b && c > d && c > e && c > f){
		printf("O maior numero é %d",c);
	}else if(d > a && d > b && d > c && d > e && d > f){
		printf("O maior numero é %d",d);
	}else if(e > a && e > b && e > c && e > d && e > f){
		printf("O maior numero é %d",e);
	}else if(f > a && f > b && f > c && f > d && f > e){
		printf("O maior numero é %d",f);
	}
	
}
