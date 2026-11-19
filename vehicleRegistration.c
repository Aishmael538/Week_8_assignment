#include <stdio.h>
#include <string.h>

struct Vehicle {
    char registrationNumber[20];
    char vehicleModel[40];
    char manufacturer[40];
    int yearManufactured;
    double dailyRentalCharge;
};

int main(void) {
    struct Vehicle vehicle;

    printf("Enter Registration Number: ");
    fgets(vehicle.registrationNumber, sizeof(vehicle.registrationNumber), stdin);
    vehicle.registrationNumber[strcspn(vehicle.registrationNumber, "\n")] = '\0';

    printf("Enter Vehicle Model: ");
    fgets(vehicle.vehicleModel, sizeof(vehicle.vehicleModel), stdin);
    vehicle.vehicleModel[strcspn(vehicle.vehicleModel, "\n")] = '\0';

    printf("Enter Manufacturer: ");
    fgets(vehicle.manufacturer, sizeof(vehicle.manufacturer), stdin);
    vehicle.manufacturer[strcspn(vehicle.manufacturer, "\n")] = '\0';

    printf("Enter Year of Manufacture: ");
    scanf("%d", &vehicle.yearManufactured);

    printf("Enter Daily Rental Charge (KSh): ");
    scanf("%lf", &vehicle.dailyRentalCharge);

    printf("\n----------------------------------------\n");
    printf("       VEHICLE REGISTRATION REPORT\n");
    printf("----------------------------------------\n");
    printf("Registration No. : %s\n", vehicle.registrationNumber);
    printf("Vehicle Model    : %s\n", vehicle.vehicleModel);
    printf("Manufacturer     : %s\n", vehicle.manufacturer);
    printf("Year Manufactured: %d\n", vehicle.yearManufactured);
    printf("Daily Rental Fee : KSh. %.2f\n", vehicle.dailyRentalCharge);
    printf("----------------------------------------\n");

    printf("\nTwo applications of structures in C programming:\n");
    printf("1. Storing records such as patient or student details.\n");
    printf("2. Grouping related data such as vehicle details in one variable.\n");

    return 0;
}
