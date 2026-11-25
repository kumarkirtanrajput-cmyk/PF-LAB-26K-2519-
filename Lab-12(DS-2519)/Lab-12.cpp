#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, total = 0;
    int *stock;
    int lowest, index, choice, newStock;
    float average;

    printf("Enter number of book categories: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of categories!");
        return 0;
    }

    stock = (int *)malloc(n * sizeof(int));

    if (stock == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter stock for category %d: ", i);
        scanf("%d", &stock[i]);

        total += stock[i];
    }

    lowest = stock[0];
    index = 0;

    for (i = 1; i < n; i++)
    {
        if (stock[i] < lowest)
        {
            lowest = stock[i];
            index = i;
        }
    }

    average = (float)total / n;

    printf("\nTotal Stock: %d", total);
    printf("\nAverage Stock: %.2f", average);
    printf("\nLowest Stock: %d", lowest);
    printf("\nCategory Index: %d", index);

    printf("\n\nEnter category index to update (0 to %d): ", n - 1);
    scanf("%d", &choice);

    if (choice >= 0 && choice < n)
    {
        printf("Enter new stock quantity: ");
        scanf("%d", &newStock);

        stock[choice] = newStock;
        total = 0;
        for (i = 0; i < n; i++)
        {
            total += stock[i];
        }
        printf("\nUpdated Stock Values:\n");
        for (i = 0; i < n; i++)
        {
            printf("Category %d: %d\n", i, stock[i]);
        }
        printf("Updated Total: %d", total);
        printf("\nUpdated Average: %.2f", (float)total / n);
    }
    else
    {
        printf("Invalid category index!");
    }

    free(stock);

    return 0;
}
