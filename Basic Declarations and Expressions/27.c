#include <stdio.h>




int main(){

    int numbers[5];
    int count = 0;

    for(int i=0; i<5; i++){
        printf("\nenter number:");
        scanf("%d", &numbers[i]);
        if(numbers[i]<=0){
            count++;
        }

    }
    printf("count = %d", count);
    
}