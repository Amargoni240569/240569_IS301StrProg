#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inFile, *outFile;

    char empNo[10];
    int dept;
    float payRate;
    char exempt;
    int hoursWorked;
    float basePay;

    // Open input file
    inFile = fopen("employee.txt", "r");
    if (inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1;
    }

    // Open output file
    outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL) {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    // Skip header line
    fscanf(inFile, "%*[^\n]\n");

    // Write headers to output file
    fprintf(outFile, "%-10s %-10s %-10s %-10s %-15s %-10s\n",
            "EmpNo", "Dept", "PayRate", "Exempt", "HoursWorked", "BasePay");

    // Read data until end of file
    while (fscanf(inFile, "%s %d %f %c %d",
                  empNo, &dept, &payRate, &exempt, &hoursWorked) == 5) {

        basePay = payRate * hoursWorked;

        fprintf(outFile, "%-10s %-10d %-10.2f %-10c %-15d %-10.2f\n",
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");

    return 0;
}
