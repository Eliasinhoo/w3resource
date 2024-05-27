#include <stdio.h>


int main(){

    char id[10];
    int hour;
    double value, salary;

    


    printf("please input the ID:");
    scanf("%s", &id);

    printf("\nInput the working hrs: ");
    scanf("%d", &hour);

    printf("\nInput the hourly salary: ");
    scanf("%lf", &value);

    salary = value * hour;


    printf("\n employee no %s earns %.2lf", id, salary);





}