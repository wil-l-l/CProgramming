#include <stdio.h>

int main(void){

    int age;
    puts("Enter your age bro: ");
    scanf("%d", &age);
    int calculateMinutes = age*365*12*60;

    printf("%d years is %d minutes\n", age, calculateMinutes);
    
    return 0;
}