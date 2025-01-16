/*
    Introduce to variables in C.

    Commands:
    - gcc: compiles code
    - ./a./out: executes the code
    - clear: to clear workspace
    - hitting tab will auto fill the file name

*/

// Preprocessor directive
#include <stdio.h>

// Main function 
int main(void){

    // Create a variable & Assign value of 0
    int first_number = 9;
    int second_number = -15; 
    int sum = first_number + second_number;
    printf("The first number is %d\n", first_number); // %d is a conversion specifier
    printf("The second number is %d\n", second_number); // \n is an escape sequence
    printf("The sum of the 2 number is: %d", sum);
    printf("\n%d + %d = %d\n", first_number, second_number, first_number+second_number);

    return 0;
}