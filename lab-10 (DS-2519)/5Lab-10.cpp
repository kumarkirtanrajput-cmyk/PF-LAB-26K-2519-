#include <stdio.h>
struct HospitalRecord
{
    int RecordID;

    struct PatientInfo
    {
        int PatientID;
        char Name[50];
        int Age;
    } patient;
};

int main()
{
    struct HospitalRecord h1 = {
        101,
        {201, "Ali", 25}
    };

    struct HospitalRecord *ptr;

    ptr = &h1;
    
    printf("----- Hospital Record -----\n");
    printf("Record ID: %d\n", ptr->RecordID);
    printf("Patient ID: %d\n", ptr->patient.PatientID);
    printf("Patient Name: %s\n", ptr->patient.Name);
    printf("Patient Age: %d\n", ptr->patient.Age);

    return 0;
}
