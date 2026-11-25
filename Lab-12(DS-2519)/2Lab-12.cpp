#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j;
    int totalChars = 0;
    int longest = 0;

    char **feedback;

    printf("Enter number of feedback entries: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number!");
        return 0;
    }

    feedback = (char **)malloc(n * sizeof(char *));

    if (feedback == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    feedback = (char **)realloc(feedback, n * sizeof(char *));

    if (feedback == NULL)
    {
        printf("Memory reallocation failed!");
        return 1;
    }

    getchar();

    for (i = 0; i < n; i++)
    {
        char temp[500];

        printf("Enter feedback %d: ", i + 1);
        fgets(temp, sizeof(temp), stdin);

        temp[strcspn(temp, "\n")] = '\0';

        feedback[i] = (char *)malloc(
            (strlen(temp) + 1) * sizeof(char));

        if (feedback[i] == NULL)
        {
            printf("Memory allocation failed!");

            for (j = 0; j < i; j++)
            {
                free(feedback[j]);
            }

            free(feedback);
            return 1;
        }

        strcpy(feedback[i], temp);
    }

    for (i = 0; i < n; i++)
    {
        char *ptr = feedback[i];
        int length = 0;
        while (*ptr != '\0')
        {
            totalChars++;
            length++;
            ptr++;
        }
        if (length > longest)
        {
            longest = length;
            j = i;
        }
    }
    printf("\nAll Feedback Entries:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", feedback[i]);
    }
    printf("\nTotal Characters: %d", totalChars);
    printf("\nLongest Feedback: %s", feedback[j]);
    printf("\nLongest Length: %d", longest);

    for (i = 0; i < n; i++)
    {
        free(feedback[i]);
    }
    free(feedback);
    return 0;
}
