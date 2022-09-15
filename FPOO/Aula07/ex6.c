#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int nums[5], i,j, aux = 0;

    for(i = 0; i <5; i++){
    printf("Digíte o %do. valor inteiro: ",i+1);
        scanf("%d", &nums[i]);
    }

    for(i = 0; i <5; i++){
        for(j = 0; j <5; j++){
            if(nums[i] < nums[j]){
                aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
        }
    }
    for(i = 0; i <5; i++){
        printf("[%d]", nums[i]);
    }
}
