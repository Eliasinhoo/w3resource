#include <stdio.h>



int main(){

    int a = 5;
    int b = 6;
    int *pt1 = &a;
    int *pt2 = &b;

    int c = *pt1 + *pt2;

    printf("c = %d", c);



    
}