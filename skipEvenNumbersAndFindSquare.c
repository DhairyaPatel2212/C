#include <stdio.h>
int main()
{
    int option, i;
    // Outer loop for menu options
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Print numbers\n");
        printf("2. Print squares\n");
        printf("3. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);
        // Switch statement for menu selection
        switch (option)
        {
        case 1:
            printf("Printing numbers from 1 to 5:\n");
            for (i = 1; i <= 5; i++)
            {
                // Use continue to skip the even numbers
                if (i % 2 == 0)
                {
                    continue; // Skip even numbers
                }
                printf("%d ", i);
            }
            printf("\n");
            break;
        case 2:
            printf("Printing squares of numbers from 1 to 5:\n");
            for (i = 1; i <= 5; i++)
            {
                // Using goto to skip printing square of 3
                if (i == 3)
                {
                    goto skip_square; // Skip printing the square of 3
                }
                printf("%d^2 = %d\n", i, i * i);
                continue; // Continue to the next iteration
            }
        skip_square: // Label for goto
            printf("Skipped the square of 3.\n");
            break;
        case 3:
            printf("Exiting the program.\n");
            return 0; // Exit the program
        default:
            printf("Invalid option! Please select again.\n");
        }
    }
    return 0;
}