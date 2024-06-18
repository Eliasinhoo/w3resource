#include <stdio.h>



int main(){

    int lines;
    printf("\nenter lines:");
    scanf("%d", &lines);
    int a = 1;

    for(int i =0;i<lines;i++){
        
        for(int j=0;j<3;j++){
            printf("%d ",a);
            a+= 1;
        }
        printf(" \n");
        
    }

}