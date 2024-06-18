#include <stdio.h>



int main(){


    int a,b;
    int c;


    printf("\nenter a:");
    scanf("%d", &a);
    
    printf("\nenter b:");
    scanf("%d", &b);

    c = b % a;

    if(c==0){
        printf("Multiplied");



    }else {
        printf("Not multiplied");

    }



}