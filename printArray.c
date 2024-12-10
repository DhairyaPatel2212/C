#include <stdio.h>
int main()
{
    int array[5]; // Declare an array of size 5
    int i;        // Loop counter
    // Step 1: Input 5 elements into the array
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]); // Read elements into the array
    }
    // Step 2: Print the elements of the array
    printf("\nElements of the array are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", array[i]); // Print each element
    }
    printf("\n"); // New line after printing all elements
    return 0;
}