#include <stdio.h>
#define ROWS 3 // Number of rows
#define COLS 4 // Number of columns
int main()
{
    // Step 1: Declare and initialize a 2D array
    int array[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    // Step 2: Display the elements of the 2D array
    printf("2D Array elements:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n"); // New line after each row
    }
    return 0;
}