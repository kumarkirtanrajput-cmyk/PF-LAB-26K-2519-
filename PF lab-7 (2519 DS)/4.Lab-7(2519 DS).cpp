#include <stdio.h>
#include <string.h>

int main() {
    char word_grid[3][100];
    char word[100];
    char longest[100] = "";

    int i, j, k;
    int maxLength = 0;
    int rowIndex = 0, colIndex = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter 3 words for row %d: ", i);
        scanf(" %99[^\n]", word_grid[i]);
    }

    for (i = 0; i < 3; i++) {
        j = 0;
        k = 0;
        colIndex = 0;

        while (1) {
            if (word_grid[i][j] != ' ' &&
                word_grid[i][j] != '\0') {
                word[k] = word_grid[i][j];
                k++;
            } else {
                if (k > 0) {
                    word[k] = '\0';

                    if (k > maxLength) {
                        maxLength = k;
                        strcpy(longest, word);
                        rowIndex = i;
                        colIndex = colIndex;
                    }

                    colIndex++;
                    k = 0;
                }

                if (word_grid[i][j] == '\0') {
                    break;
                }
            }

            j++;
        }
    }

    printf("\nLongest Word: %s\n", longest);
    printf("Length: %d\n", maxLength);
    printf("Row Index: %d\n", rowIndex);
    printf("Column Index: %d\n", colIndex);

    return 0;
}



if (k > maxLength) {
    maxLength = k;
    strcpy(longest, word);
    rowIndex = i;
  
    colIndex = colIndex;
}
