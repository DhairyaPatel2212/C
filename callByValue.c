#include <stdio.h>
void modifyValue(int x)
{
    x += 10;
    printf("Inside function: %d\n", x);
}
int main()
{
    int originalValue = 5;
    printf("Before function call: %d\n", originalValue);
    modifyValue(originalValue);
    printf("After function call: %d\n", originalValue);
    return 0;
}