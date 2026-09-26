#include <stdio.h>
#include <string.h>

// Function declarations
void employeeSalaryManagement();
void departmentBudgets();
void vehicleRegistrations();

// Employee Salary Management
void employeeSalaryManagement()
{
    float salaries[50];
    float total = 0;
    float average;
    float highest;
    float lowest;
    float searchSalary;
    int found = 0;
    int i;
    int j;
    float temp;

    printf("\n========================================\n");
    printf("       EMPLOYEE SALARY MANAGEMENT\n");
    printf("========================================\n");

    // Capture 50 salaries
    for (i = 0; i < 50; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        total = total + salaries[i];
    }

    // Set first salary as highest and lowest
    highest = salaries[0];
    lowest = salaries[0];

    // Find highest and lowest salary
    for (i = 1; i < 50; i++)
    {
        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }

        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

    // Calculate average
    average = total / 50;

    // Display all salaries
    printf("\n========================================\n");
    printf("           ALL EMPLOYEE SALARIES\n");
    printf("========================================\n");

    for (i = 0; i < 50; i++)
    {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    // Display salary information
    printf("\n========================================\n");
    printf("           SALARY REPORT\n");
    printf("========================================\n");
    printf("Total salary expenditure : %.2f\n", total);
    printf("Average salary           : %.2f\n", average);
    printf("Highest salary           : %.2f\n", highest);
    printf("Lowest salary            : %.2f\n", lowest);

    // Search for a salary
    printf("\nEnter salary to search for: ");
    scanf("%f", &searchSalary);

    for (i = 0; i < 50; i++)
    {
        if (salaries[i] == searchSalary)
        {
            printf("Salary %.2f found for Employee %d.\n",
                   searchSalary, i + 1);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Salary %.2f was not found.\n", searchSalary);
    }

    // Sort salaries from lowest to highest
    for (i = 0; i < 49; i++)
    {
        for (j = i + 1; j < 50; j++)
        {
            if (salaries[i] > salaries[j])
            {
                temp = salaries[i];
                salaries[i] = salaries[j];
                salaries[j] = temp;
            }
        }
    }

    // Display sorted salaries
    printf("\n========================================\n");
    printf("        SORTED SALARIES\n");
    printf("        LOWEST TO HIGHEST\n");
    printf("========================================\n");

    for (i = 0; i < 50; i++)
    {
        printf("Salary %d: %.2f\n", i + 1, salaries[i]);
    }

    printf("========================================\n");
}

// Department Budgets
void departmentBudgets()
{
    float budgets[10];
    float total = 0;
    float average;
    float temp;
    int i;
    int j;

    printf("\n========================================\n");
    printf("          DEPARTMENT BUDGETS\n");
    printf("========================================\n");

    // Capture 10 department budgets
    for (i = 0; i < 10; i++)
    {
        printf("Enter budget for Department %d: ", i + 1);
        scanf("%f", &budgets[i]);

        total = total + budgets[i];
    }

    // Calculate average
    average = total / 10;

    // Display budgets
    printf("\n========================================\n");
    printf("        ALL DEPARTMENT BUDGETS\n");
    printf("========================================\n");

    for (i = 0; i < 10; i++)
    {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    // Display total and average
    printf("\n========================================\n");
    printf("        BUDGET REPORT\n");
    printf("========================================\n");
    printf("Total budget   : %.2f\n", total);
    printf("Average budget : %.2f\n", average);

    // Sort budgets from lowest to highest
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (budgets[i] > budgets[j])
            {
                temp = budgets[i];
                budgets[i] = budgets[j];
                budgets[j] = temp;
            }
        }
    }

    // Display sorted budgets
    printf("\n========================================\n");
    printf("        SORTED DEPARTMENT BUDGETS\n");
    printf("        LOWEST TO HIGHEST\n");
    printf("========================================\n");

    for (i = 0; i < 10; i++)
    {
        printf("Budget %d: %.2f\n", i + 1, budgets[i]);
    }

    printf("========================================\n");
}

// Vehicle Registration Numbers
void vehicleRegistrations()
{
    char registrations[20][20];
    char searchRegistration[20];
    int found = 0;
    int i;

    printf("\n========================================\n");
    printf("       VEHICLE REGISTRATION SYSTEM\n");
    printf("========================================\n");

    // Capture 20 registration numbers
    for (i = 0; i < 20; i++)
    {
        printf("Enter registration number for Vehicle %d: ",
               i + 1);

        scanf("%19s", registrations[i]);
    }

    // Display all registration numbers
    printf("\n========================================\n");
    printf("       VEHICLE REGISTRATION NUMBERS\n");
    printf("========================================\n");

    for (i = 0; i < 20; i++)
    {
        printf("Vehicle %d: %s\n",
               i + 1, registrations[i]);
    }

    // Search for a registration number
    printf("\nEnter registration number to search for: ");
    scanf("%19s", searchRegistration);

    for (i = 0; i < 20; i++)
    {
        if (strcmp(registrations[i], searchRegistration) == 0)
        {
            printf("Registration %s found for Vehicle %d.\n",
                   searchRegistration, i + 1);

            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Registration %s was not found.\n",
               searchRegistration);
    }

    printf("========================================\n");
}

// Main Program
int main()
{
    int choice;

    printf("========================================\n");
    printf(" MUNICIPAL INFORMATION MANAGEMENT SYSTEM\n");
    printf("========================================\n");

    // Main menu
    printf("\n========================================\n");
    printf("              MAIN MENU\n");
    printf("========================================\n");
    printf("1. Employee Salary Management\n");
    printf("2. Department Budgets\n");
    printf("3. Vehicle Registrations\n");
    printf("0. Exit\n");
    printf("========================================\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        employeeSalaryManagement();
    }
    else if (choice == 2)
    {
        departmentBudgets();
    }
    else if (choice == 3)
    {
        vehicleRegistrations();
    }
    else if (choice == 0)
    {
        printf("\nExiting the system...\n");
    }
    else
    {
        printf("\nInvalid choice. Please try again.\n");
    }

    printf("\nAs of today 26 Sep 2026\n");

    return 0;
}