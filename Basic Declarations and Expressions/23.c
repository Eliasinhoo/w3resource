#include <stdio.h>



int main(){


    float a,b,c,perimeter;

    printf("\nenter a:");
    scanf("%f", &a);

    printf("\nenter b:");
    scanf("%f", &b);

    printf("\nenter c:");
    scanf("%f", &c);

    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("valid triangle g");

        perimeter = a + b + c;
        printf("permiter = %f", perimeter);




    }
    else{
        printf("invalid triangle g");
    }


    






}