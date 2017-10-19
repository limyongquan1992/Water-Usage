#include <cs50.h>
#include <stdio.h>

int convert_minutes_bottles(int i);

int main(void){
    int bath_time_min;
    do{
    printf("How many minutes you take for bath?\n");
    bath_time_min = get_int();
    }
    while (bath_time_min < 0);
    
    printf("Bath Duration: %i minutes\n", bath_time_min);
    printf("Equivalent Bottles of Water Wasted: %i bottles\n", convert_minutes_bottles(bath_time_min));
}

int convert_minutes_bottles(int i){
    return i*12;
}