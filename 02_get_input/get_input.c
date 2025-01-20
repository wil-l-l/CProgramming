#include <stdio.h>

int main(void){

    int square_side;
    puts("Enter the side of a square: "); // Prints something in the terminal, adds a new line to the termianl (so escape sequence \n isn't needed)

    // Get the input
    scanf("%d", &square_side); // & sign is an address operator


    int square_perimeter = square_side*4; 
    int square_area = square_side*square_side;

    printf("The perimeter of a square with side %d is %d\n", square_side, square_perimeter); // %d is a conversion specifier
    printf("The area of the square is %d\n", square_area); 

    return 0;
}