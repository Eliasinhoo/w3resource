#include <stdio.h>



int main(void){


    int m = 10;
    int n,o;
    int *z = &m;


    printf("z stores the adress of m = %p\n", z);
    printf("*z stores the value of m = %i\n", *z);
    printf("&m stores the adress of n = %p\n", &m);
    printf("&n stores the adress of n = %p\n", &n);
    printf("&o stores the adress of o = %p\n", &o);
    printf("&z stores the adress of z = %p\n", &z);

}