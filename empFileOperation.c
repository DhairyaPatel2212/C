#include <stdio.h>
struct Employee
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    FILE *file;
    struct Employee emp;
    // Open file for writing
    file = fopen("emp.rec", "wb");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    // Input employee details
    printf("Enter name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    // Remove newline character if present
    emp.name[strcspn(emp.name, "\n")] = '\0';
    printf("Enter age: ");
    scanf("%d", &emp.age);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    // Write employee details to file
    fwrite(&emp, sizeof(struct Employee), 1, file);
    // Close the file
    fclose(file);
    printf("Employee details written to emp.rec successfully.\n");
    return 0;
}