#include <stdio.h>
void printSensorData(void *ptr, char type) {
    if (type == 'f') {
        float *temp = (float *)ptr;
        printf("Temperature: %.2f Celsius\n", *temp);
    }
    else if (type == 'i') {

        int *motion = (int *)ptr;

        if (*motion == 1) {
            printf("Motion Detected\n");
        }
        else if (*motion == 0) {
            printf("No Motion\n");
        }
    }
    else if (type == 'c') {
        char *door = (char *)ptr;
        if (*door == 'O') {
            printf("Door Open\n");
        }
        else if (*door == 'C') {
            printf("Door Closed\n");
        }
    }
    else {
        printf("Invalid data type\n");
    }
}
int main() {
    float temperature;
    int motionStatus;
    char doorStatus;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Enter motion status (1 for detected, 0 for no motion): ");
    scanf("%d", &motionStatus);

    printf("Enter door status (O for open, C for closed): ");
    scanf(" %c", &doorStatus);

    printf("\n--- Smart Home Sensor Readings ---\n");
    printSensorData(&temperature, 'f');
    printSensorData(&motionStatus, 'i');
    printSensorData(&doorStatus, 'c');
    return 0;
}
