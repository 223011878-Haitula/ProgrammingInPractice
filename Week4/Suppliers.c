
    
#include <stdio.h>

int main()
{
    char supplierName[4][50];
    float price[4];
    float budget;
    int registered[4];
    int documentsComplete[4];
    int qualified[4];
    int preferred = -1;
    int i;

    printf("====================================\n");
    printf("       TENDER EVALUATION SYSTEM\n");
    printf("====================================\n");

    printf("Enter available budget: ");
    scanf("%f", &budget);

    // Enter supplier information
    for (i = 0; i < 4; i++)
    {
        printf("\nEnter details for Supplier %d\n", i + 1);

        printf("Supplier name: ");
        scanf("%49s", supplierName[i]);

        printf("Tender price: ");
        scanf("%f", &price[i]);

        printf("Is supplier registered? (1=Yes, 0=No): ");
        scanf("%d", &registered[i]);

        printf("Are all documents complete? (1=Yes, 0=No): ");
        scanf("%d", &documentsComplete[i]);

        // Check qualification
        if (registered[i] == 1 &&
            documentsComplete[i] == 1 &&
            price[i] <= budget)
        {
            qualified[i] = 1;

            // Find the lowest qualified price
            if (preferred == -1 ||
                price[i] < price[preferred])
            {
                preferred = i;
            }
        }
        else
        {
            qualified[i] = 0;
        }
    }

    // Display evaluation results
    printf("\n====================================\n");
    printf("        EVALUATION RESULTS\n");
    printf("====================================\n");

    for (i = 0; i < 4; i++)
    {
        printf("\nSupplier: %s\n", supplierName[i]);
        printf("Price: %.2f\n", price[i]);

        if (qualified[i] == 0)
        {
            printf("Status: Disqualified\n");
        }
        else if (i == preferred)
        {
            printf("Status: Preferred Supplier\n");
        }
        else
        {
            printf("Status: Qualified\n");
        }
    }

    if (preferred == -1)
    {
        printf("\nNo supplier qualified.\n");
    }
    else
    {
        printf("\nPreferred Supplier: %s\n",
               supplierName[preferred]);
        printf("Lowest qualified price: %.2f\n",
               price[preferred]);
    }

    return 0;
}