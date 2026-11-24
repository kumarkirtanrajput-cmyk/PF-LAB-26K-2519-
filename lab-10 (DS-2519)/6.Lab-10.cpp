#include <stdio.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[])
{
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("\nVehicle Type: %s\n", vehicleType);
    printf("Toll Fee: %d PKR\n", TOLL_RATE);
    printf("Total Vehicles: %d\n", totalVehicles);
    printf("Total Revenue: %d PKR\n", totalRevenue);
}

int main()
{
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Bike");
    processVehicle("Car");

    printf("\n===== Final Toll Report =====\n");
    printf("Total Vehicles: 5\n");
    printf("Total Collection: 250 PKR\n");

    return 0;
}
