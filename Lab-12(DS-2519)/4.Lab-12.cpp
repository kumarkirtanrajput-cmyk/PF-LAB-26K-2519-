#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int total = 0;
    int highest, index;
    int choice, newRating;
    int *ratings;

    printf("Enter number of movie categories: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of categories!");
        return 0;
    }

    ratings = (int *)malloc(n * sizeof(int));

    if (ratings == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter ratings for category %d: ", i);
        scanf("%d", &ratings[i]);

        total += ratings[i];
    }

    highest = ratings[0];
    index = 0;

    for (i = 1; i < n; i++)
    {
        if (ratings[i] > highest)
        {
            highest = ratings[i];
            index = i;
        }
    }

    printf("\nTotal Ratings: %d", total);
    printf("\nAverage Ratings: %.2f", (float)total / n);
    printf("\nHighest Ratings: %d", highest);
    printf("\nCategory Index: %d", index);

    printf("\n\nEnter category index to update: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < n)
    {
        printf("Enter new rating count: ");
        scanf("%d", &newRating);

        ratings[choice] = newRating;

        total = 0;
        highest = ratings[0];
        index = 0;

        for (i = 0; i < n; i++)
        {
            total += ratings[i];

            if (ratings[i] > highest)
            {
                highest = ratings[i];
                index = i;
            }
        }

        printf("\nUpdated Ratings:\n");

        for (i = 0; i < n; i++)
        {
            printf("Category %d: %d\n", i, ratings[i]);
        }

        printf("\nUpdated Total: %d", total);
        printf("\nUpdated Average: %.2f", (float)total / n);
        printf("\nUpdated Highest: %d", highest);
        printf("\nCategory Index: %d", index);
    }
    else
    {
        printf("Invalid category index!");
    }

    free(ratings);

    return 0;
}
