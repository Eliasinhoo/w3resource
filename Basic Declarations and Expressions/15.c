#include <stdio.h>
#include <math.h>




int main(){


    float x1,x2,y1,y2,a,b,c;
    
    printf("\nenter x1:");
    scanf("%f", &x1);

    printf("\nenter x2:");
    scanf("%f", &x2);

    printf("\nenter y1:");
    scanf("%f", &y1);

    printf("\nenter y2:");
    scanf("%f", &y2);

    a = x2-x1;
    b = y2-y1;
    c = sqrt((a*a)+(b*b));

    printf("the distance between the points is: %f",c);




}