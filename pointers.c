#include <stdio.h>
// Extern storage class: declaration of global variable
int externVar = 10; // This can be accessed from other files as well
// Function to demonstrate static storage class
void staticExample()
{
    static int staticVar = 0; // Static variable retains its value between function calls
    staticVar++;
    printf("Static variable value: %d\n", staticVar);
}
// Function to demonstrate register storage class
void registerExample()
{
    register int registerVar; // Register variable for fast access
    for (registerVar = 0; registerVar < 5; registerVar++)
    {
        printf("Register variable value: %d\n", registerVar);
    }
}
int main()
{
    // Auto storage class (default for local variables)
    auto int autoVar = 5; // This is optional as auto is default
    printf("Auto variable value: %d\n", autoVar);
    // Accessing the extern variable
    printf("Extern variable value: %d\n", externVar);
    // Demonstrate static variable
    printf("Static variable demonstration:\n");
    for (int i = 0; i < 3; i++)
    {
        staticExample();
    }
    // Demonstrate register variable
    printf("Register variable demonstration:\n");
    registerExample();
    return 0;
}