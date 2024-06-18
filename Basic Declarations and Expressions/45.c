#include <stdio.h>



int main(){
    
    float S = 0;
    float b = 1;

    for(int i =0;i<50;i++){
        S+= 1/b;
        b++;
    }

    printf("%.2f", S);



}
