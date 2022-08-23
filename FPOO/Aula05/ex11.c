#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	 int n1,i,result;
    
    printf(" Digite um numero: ");
    scanf("%d",&n1);
   
        for (i = 0; i <= 10; i++){
		result = n1*i;
		printf("%d x %d = %d\n",n1,i,result);
}
    	        
}
