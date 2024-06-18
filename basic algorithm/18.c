#include <stdio.h>
#include <stdlib.h>


int test(int a, int b){

    if ( a == 5 || b == 5 || abs(a-b) == 5 || a+b==5){
        return 1;
    }
    return 0;



}


int main(){

    printf("%d",test(5, 4));
    printf("\n%d",test(4, 3));
    printf("\n%d",test(1, 4));




}