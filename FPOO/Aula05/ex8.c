#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	 int n1,n2,i,total=0;
    
    printf(" Digite o 1 numero ");
    scanf("%d",&n1);
    printf(" Digite o 2 numero ");
    scanf("%d",&n2);

        for (i = n1; n1 < n2; n1++){
        	
        	if((n1%2)==0){
    			printf("%d \n",n1);
    		total = total + n1;
			     
	}
}
printf("A soma dos valores pares entre o intervalo digitado é %d",total);
}
