#include <stdio.h>
#include <stdbool.h>



int test(int a, int b){

    if((a ==30) | (b == 30))
    return 1;

    if((a+b)==30){

        return 1;
    }
    else{
        return 0;


    }




}


int main(){

    int a,b;
    printf("\ninput number a:");
    scanf("%d", &a);

    printf("\ninput number b:");
    scanf("%d", &b);

    printf("%d",test(a,b));



}