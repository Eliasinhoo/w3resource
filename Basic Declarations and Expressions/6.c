#include <stdio.h>


#define PI 3.14159


int main(){
    
    float r, perimeter, area;
    printf("enter radius: ");
    scanf("%f", &r);

    perimeter = 2 * PI * r;
    area = PI * r * r;
    

    printf("the perimiter is: %.2f\n", perimeter);
    printf("the area is: %.2f\n", area);

}