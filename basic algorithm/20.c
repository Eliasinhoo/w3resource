#include <stdio.h>



int test(int a){

    if(a % 3 == 0 || a % 5 == 0){
        if (a % 3 == 0 && a % 5 == 0){
            return 0;
        }
      return 1;  
    }
    return 0;
}

int main(){


    printf("%d",test(3));
    printf("\n%d",test(7));
    printf("\n%d",test(21));
}