#include <stdio.h>


void print_array(int parray[]){

    int i;
    int size =5;
    int temp[size];
    int new[size];


    for( i=0; i<size; i++)  
    {  
        
        new[i] = parray[size-i-1];
        printf("%d, \n", new[i]);
        
    } 

}

int main(){

    int a[5] = {10, 20, 30, 40, 50};
    print_array(a);



}