#include <stdio.h>




int main(){


    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    int *pt1;
    float *pt2;
    char *pt3;

    pt1 = &m;     // Assign the address of m to pointer pt1
    pt2 = &fx;    // Assign the address of fx to pointer pt2
    pt3 = &cht;  


    printf("address of m %p\n", &m);
    printf("address of fx %p\n", &fx);
    printf("address of cht %p\n", &cht);

    printf("value of m %i\n", m);
    printf("value of fx %f\n", fx);
    printf("value of cht %c\n", cht);


    printf("address of m %p\n", pt1);
    printf("address of fx %p\n", pt2);
    printf("address of cht %p\n", pt3);

    printf("value of m %i\n", *pt1);
    printf("value of fx %f\n", *pt2);
    printf("value of cht %c\n", *pt3);




    

}