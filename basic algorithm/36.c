#include <stdio.h>



int sumfunc(int array[], int size){

    int sum = 0;

    for(int i =0; i<size; i++){
        sum += array[i];
    }
    return sum;
    
}


int main(){

    int array1[] = {10, 20, 30, 40, 50};
    int array2[] = {10, 20, -30, -40, 50};

    printf("\n%d", sumfunc(array1, 5));
    printf("\n%d", sumfunc(array2, 5));


}