#include <stdio.h>
// Function declaration
void doubleValue(int *num);
int main()
{
    int number;
    // Step 3: Input number
    printf("Enter an integer: ");
    scanf("%d", &number);
    // Step 4: Call function with the address of number
    doubleValue(&number);
    // Step 5: Display the modified value
    printf("The double of the entered number is %d.\n", number);
    return 0; // Step 6: End
}
// Step 2: Function definition
void doubleValue(int *num)
{
    *num = *num * 2; // Multiply the value at the address by 2
}