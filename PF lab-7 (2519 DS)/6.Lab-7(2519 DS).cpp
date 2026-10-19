int main() {
    int shifts[4][3];
    int i, j, index;

    printf("Enter production counts for 3 workstations:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter shifts[%d][%d]: ", i, j);
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("Enter row index for insertion (0 to 3): ");
    scanf("%d", &index);

    if (index < 0 || index > 3) {
        printf("Invalid row index!\n");
        return 1;
    }

    printf("Enter 3 values for the new row:\n");

    int newRow[3];

    for (j = 0; j < 3; j++) {
        scanf("%d", &newRow[j]);
    }

    for (i = 3; i > index; i--) {
        for (j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    for (j = 0; j < 3; j++) {
        shifts[index][j] = newRow[j];
    }

    printf("\nUpdated 4 x 3 Matrix:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}
