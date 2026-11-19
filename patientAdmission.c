#include <stdio.h>
#include <string.h>

struct Patient {
    char patientID[20];
    char patientName[50];
    int age;
    char gender[20];
    char diagnosis[50];
    int daysAdmitted;
};

int main(void) {
    struct Patient patient;

    printf("Enter Patient ID: ");
    fgets(patient.patientID, sizeof(patient.patientID), stdin);
    patient.patientID[strcspn(patient.patientID, "\n")] = '\0';

    printf("Enter Patient Name: ");
    fgets(patient.patientName, sizeof(patient.patientName), stdin);
    patient.patientName[strcspn(patient.patientName, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &patient.age);
    getchar();

    printf("Enter Gender: ");
    fgets(patient.gender, sizeof(patient.gender), stdin);
    patient.gender[strcspn(patient.gender, "\n")] = '\0';

    printf("Enter Diagnosis: ");
    fgets(patient.diagnosis, sizeof(patient.diagnosis), stdin);
    patient.diagnosis[strcspn(patient.diagnosis, "\n")] = '\0';

    printf("Enter Number of Days Admitted: ");
    scanf("%d", &patient.daysAdmitted);

    printf("\n----------------------------------------\n");
    printf("       PATIENT ADMISSION REPORT\n");
    printf("----------------------------------------\n");
    printf("Patient ID       : %s\n", patient.patientID);
    printf("Patient Name     : %s\n", patient.patientName);
    printf("Age              : %d\n", patient.age);
    printf("Gender           : %s\n", patient.gender);
    printf("Diagnosis        : %s\n", patient.diagnosis);
    printf("Days Admitted    : %d\n", patient.daysAdmitted);
    printf("----------------------------------------\n");

    return 0;
}
