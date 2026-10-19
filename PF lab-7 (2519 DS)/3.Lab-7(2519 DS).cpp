#include <stdio.h>

int main() {
    char secret_messages[3][100];
    int i, j, spaces, words;

    for (i = 0; i < 3; i++) {
        printf("Enter message %d (uppercase only): ", i + 1);

        scanf(" %99[A-Z ]", secret_messages[i]);

        spaces = 0;
        words = 0;

        for (j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                spaces++;
            }

            if (secret_messages[i][j] != ' ' &&
                (j == 0 || secret_messages[i][j - 1] == ' ')) {
                words++;
            }
        }

        printf("Filtered Message: %s\n", secret_messages[i]);
        printf("Total Spaces: %d\n", spaces);
        printf("Total Words: %d\n\n", words);
    }

    return 0;
}
