#include <stdio.h>
#include <stdlib.h>

int dif(int a){

    if(a<51){
        return (abs(a-51));
    }
    if (a>51){
        return (3*abs(a-51));
    }



}

int main(){

    int b;
    printf("\ninput number:");
    scanf("%d", &b);


    printf("%d", dif(b));

}