#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getCategory(char ch)
{
    if (isupper((unsigned char)ch))
        return 1;

    else if (islower((unsigned char)ch))
        return 2;

    else if (isdigit((unsigned char)ch))
        return 3;

    else
        return 4;
}

int main()
{
    int n, i, j;
    int matches, bestIndex = 0;
    int bestMatch = -1;

    float similarity;

    char *pattern;
    char **password;

    char temp[200];

    printf("Enter number of participants: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number!");
        return 0;
    }

    getchar();

    printf("Enter password pattern: ");
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = '\0';

    if (strlen(temp) == 0)
    {
        printf("Pattern cannot be empty!");
        return 0;
    }

    pattern = (char *)malloc(
        (strlen(temp) + 1) * sizeof(char));

    if (pattern == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    strcpy(pattern, temp);

    password = (char **)malloc(n * sizeof(char *));

    if (password == NULL)
    {
        free(pattern);
        printf("Memory allocation failed!");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEnter password attempt %d: ", i + 1);

        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';

        password[i] = (char *)malloc(
            (strlen(temp) + 1) * sizeof(char));

        if (password[i] == NULL)
        {
            printf("Memory allocation failed!");

            for (j = 0; j < i; j++)
            {
                free(password[j]);
            }

            free(password);
            free(pattern);

            return 1;
        }

        strcpy(password[i], temp);
    }

    printf("\n--- Password Similarity Results ---\n");

    for (i = 0; i < n; i++)
    {
        matches = 0;

        for (j = 0; j < strlen(pattern); j++)
        {
            if (password[i][j] != '\0' &&
                getCategory(password[i][j]) ==
                getCategory(pattern[j]))
            {
                matches++;
            }
        }

        similarity = (float)matches /
                     strlen(pattern) * 100;

        printf("\nPassword: %s", password[i]);
        printf("\nSimilarity: %.2f%%\n", similarity);

        if (matches > bestMatch)
        {
            bestMatch = matches;
            bestIndex = i;
        }
    }

    printf("\n--- Highest Similarity ---\n");

    printf("Password: %s", password[bestIndex]);

    printf("\nSimilarity: %.2f%%",
           (float)bestMatch / strlen(pattern) * 100);

    for (i = 0; i < n; i++)
    {
        free(password[i]);
    }

    free(password);
    free(pattern);

    return 0;
}
