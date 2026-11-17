#include <stdio.h>
#include <string.h>

int main()
{
    char feedback[500];
    char updated[600] = "";

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    // Remove newline character
    feedback[strcspn(feedback, "\n")] = '\0';

    printf("\nTotal characters: %lu\n", strlen(feedback));
    if (strstr(feedback, "good") != NULL)
    {
        printf("Sentiment: Positive Feedback\n");
    }

    if (strstr(feedback, "bad") != NULL)
    {
        printf("Sentiment: Negative Feedback\n");
        char *ptr = feedback;
        char *found;
        while ((found = strstr(ptr, "bad")) != NULL)
            strncat(updated, ptr, found - ptr);
            strcat(updated, "not good");
            ptr = found + 3;
        }
        strcat(updated, ptr);
        printf("Updated Review: %s\n", updated);
    }
    else
    {
        printf("No negative word found.\n");
        printf("Original Review: %s\n", feedback);
    }
    return 0;
}
