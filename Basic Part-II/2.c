#include <stdio.h>


int main(){

    char str1[10];
    int a,b;

    printf("\nenter string 1:");
    scanf("%s", &str1);


    printf("\nenter num 1:");
    scanf("%d", &a);

    printf("\nenter num 2:");
    scanf("%d", &b);

    int c = b-a;

    for(int i=0; i<c;i++){
        
        char temp = str1[a+i];
        str1[a+i]= str1[b-i];
        str1[b-i]= temp;


    }
    printf("%s",str1);
}