// C program to implement putchar() to print the character entered by user
#include <stdio.h>
// Driver code
int main()
{
    int character;
    printf("Enter any random character between a-z: ");
    character = getchar();
    printf("The entered character is : ");
    putchar(character);
    return 0;
}