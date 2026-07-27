#include <stdio.h>

int main()
{
    
    char municipalityName[50];
    char mayorName[50];
    int population;

    // System title
    printf("========================================\n");
    printf("Municipal Financial Management System\n");
    printf("========================================\n\n");

    // Welcome message
    printf("Welcome to Windhoek Municipality\n\n");

    // Capture information from user
    printf("Enter Municipality Name: ");
    scanf("%s", municipalityName);

    printf("Enter Mayor's Name: ");
    scanf("%s", mayorName);

    printf("Enter Population: ");
    scanf("%d", &population);

    // Display report
    printf("\n========================================\n");
    printf("       MUNICIPAL INFORMATION REPORT\n");
    printf("========================================\n");

    printf("Municipality Name : %s\n", municipalityName);
    printf("Mayor's Name      : %s\n", mayorName);
    printf("Population        : %d\n", population);

    printf("========================================\n");

    return 0;
}