#include <stdio.h>
// Function to generate Fibonacci series iteratively
void fibonacci(int n)
{
    int a = 0, b = 1, next;
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            next = i; // First two terms are 0 and 1
        }
        else
        {
            next = a + b; // Calculate the next term
            a = b;        // Update a to the previous term
            b = next;     // Update b to the next term
        }
        printf("%d ", next);
    }
    printf("\n");
}
int main()
{
    int terms;
    // Input from user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);
    if (terms <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        fibonacci(terms);
    }
    return 0;
}