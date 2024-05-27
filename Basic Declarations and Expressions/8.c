#include <stdio.h>



int main(){


    int input = 1329;
    int weeks, years, days;
 

    days = 1329;

    years = days/365;
    weeks = (days % 365)/7;
    days = days - (years*365) - (weeks * 7);


    printf("years: %d, weeks: %d, days: %d",years ,weeks ,days);





}