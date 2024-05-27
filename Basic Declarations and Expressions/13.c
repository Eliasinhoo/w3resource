#include <stdio.h>




int main(){


    int a,b,c;

    printf("\nplease input first number:");
    scanf("%d",&a);

    printf("\nplease input second number:");
    scanf("%d",&b);

    printf("\nplease input third number:");
    scanf("%d",&c);

    int d;

    if(a>b){
        if(a>c){
            d=a;
        }
        else{
            d=c;
        }
        
    } else{
        if(b>c){
            d=b;
        }
        else{
            d=c;
        }
    }

    printf("big number = %d", d);
    
}