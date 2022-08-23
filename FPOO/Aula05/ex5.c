#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	 int n1,n2,i;
    
    printf(" Digite o 1 numero ");
    scanf("%d",&n1);
    printf(" Digite o 2 numero ");
    scanf("%d",&n2);

        for (n1 = 1; n1 < n2; n1++){
        if((n1%2)==0){
    	printf("%d, ",n1);        
	}
	
	
	
}
}
