#include <stdio.h>

int main()
{
    int studentNumber;
    char name[20];

    printf("Enter student number: ");
    scanf("%d", &studentNumber);

    printf("Enter name: ");
    scanf("%s", name);

    printf("\nStudent Number: %d", studentNumber);
    printf("\nName: %s", name);

    return 0;
}