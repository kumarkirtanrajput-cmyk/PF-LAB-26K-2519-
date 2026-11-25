#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int containsDigit(char *str)
{
    while (*str != '\0')
    {
        if (isdigit((unsigned char)*str))
        {
            return 1;
        }

        str++;
    }

    return 0;
}

int main()
{
    int n, i, valid;

    char **username;

    printf("Enter number of usernames: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number!");
        return 0;
    }

    username = (char **)malloc(n * sizeof(char *));

    if (username == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        char temp[100];

        printf("Enter username %d: ", i + 1);
        scanf("%99s", temp);

        username[i] = (char *)malloc(
            (strlen(temp) + 1) * sizeof(char));

        if (username[i] == NULL)
        {
            printf("Memory allocation failed!");

            while (i > 0)
            {
                free(username[--i]);
            }

            free(username);
            return 1;
        }

        strcpy(username[i], temp);
    }

    printf("\nValid Usernames:\n");

    valid = 0;

    for (i = 0; i < n; i++)
    {
        if (containsDigit(username[i]) == 0)
        {
            int j, alphabetic = 1;

            for (j = 0; username[i][j] != '\0'; j++)
            {
                if (!isalpha((unsigned char)username[i][j]))
                {
                    alphabetic = 0;
                    break;
                }
            }

            if (alphabetic)
            {
                printf("%s\n", username[i]);
                valid++;
            }
        }
    }

    if (valid == 0)
    {
        printf("No valid usernames found.");
    }

    for (i = 0; i < n; i++)
    {
        free(username[i]);
    }

    free(username);

    return 0;
}
