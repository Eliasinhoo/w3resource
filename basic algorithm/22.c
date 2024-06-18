#include <stdio.h>
#include <stdlib.h>



int test(int a, int b){

    int c = a+b;

    if(a >= 10 && a <= 20 || b >= 10 && b <= 20){
        return 18;
    }
    return c;
    
        
}



int main(){

    printf("%d",test(3, 7));
    printf("\n%d",test(10, 11));
    printf("\n%d",test(10, 20));
    printf("\n%d",test(21, 220));



}