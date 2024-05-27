#include <stdio.h>



int main(){

    double w1,w2,no1,no2;

    printf("Weight - Item1: ");
    scanf("%lf", &w1);

    printf("Weight - Item2: ");
    scanf("%lf", &w2);

    printf("no - Item1: ");
    scanf("%lf", &no1);
    
    printf("no - Item2: ");
    scanf("%lf", &no2);

    float avgw;
    avgw = ((w2*no2) + (w1*no1))/(no1 + no2);
    

    printf("average weight: %f\n",avgw);
    


}