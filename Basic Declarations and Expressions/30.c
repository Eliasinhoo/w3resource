#include <stdio.h>



int main(){

    int number;
    int squares = 2;
    printf("\nenter number:");
    scanf("%d", &number);

    while(number % 2){
        printf("\nenter even number g:");
        scanf("%d", &number);
    }

    for(int i=0; i<number/2; i++){

        int output = squares*squares;
        printf("\nsquare %d^2= %d",squares , output);

        squares = squares +2;


    }


}