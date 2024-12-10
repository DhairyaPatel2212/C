#include <stdio.h>
int main()
{
    int day;
    // Prompt the user for input
    printf("Enter a number (1-7) to get the corresponding day of the week:\n");
    printf("1 - Monday\n2 - Tuesday\n3 - Wednesday\n4 - Thursday\n5 - Friday\n6 - Saturday\n7 Sunday\n");
    scanf("%d", &day);
    // Determine the day using switch statement
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    return 0;
}