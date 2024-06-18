#include <stdio.h>



int main(){


    int a = 1;

    for (int i=0; i<50; i++){
        if(a % 2){
            a++;
        }else{
            printf("%d ", a);
            a++;

        }


    }
}