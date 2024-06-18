#include <stdio.h>



int main(void){
    int m = 29;

    int *ab = &m;


    printf("Address of m = %p\n", &m);
    printf("Value of m = %i\n", m);


    printf("Address of ab = %p\n", ab);
    printf("Value of ab = %i\n", *ab);

    m = 34;

    printf("Address of ab = %p\n", ab);
    printf("Value of ab = %i\n", *ab);


}