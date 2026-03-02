/*  
    Developed by: Abel Margoni WAMANIMBO
    Date: 28 February 2025
*/

#include <stdio.h>

int main(){

    /* Variable Declarations (Initialized to 0) */
    int qtyTV = 0, qtyMonitor = 0, qtyFlash = 0, qtyHard = 0, qtyPrinter = 0;

    const float priceTV = 400.00;
    const float priceMonitor = 220.00;
    const float priceFlash = 35.20;
    const float priceHard = 150.00;
    const float pricePrinter = 300.00;

    float totalTV = 0, totalMonitor = 0, totalFlash = 0;
    float totalHard = 0, totalPrinter = 0;

    float subtotal = 0, tax = 0, finalTotal = 0;
    const float taxRate = 0.0835;

    /* User Input */
    printf("How Many TVs Were Sold? ");
    scanf("%d", &qtyTV);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &qtyMonitor);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &qtyFlash);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &qtyHard);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &qtyPrinter);

    /* Calculations */
    totalTV = qtyTV * priceTV;
    totalMonitor = qtyMonitor * priceMonitor;
    totalFlash = qtyFlash * priceFlash;
    totalHard = qtyHard * priceHard;
    totalPrinter = qtyPrinter * pricePrinter;

    subtotal = totalTV + totalMonitor + totalFlash + totalHard + totalPrinter;
    tax = subtotal * taxRate;
    finalTotal = subtotal + tax;

    /* Output */
    printf("\n============================================================\n");
    printf("QTY   DESCRIPTION         UNIT PRICE      TOTAL PRICE\n");
    printf("============================================================\n");

    printf("%-5d %-18s %12.2f %15.2f\n", qtyTV, "TV", priceTV, totalTV);
    printf("%-5d %-18s %12.2f %15.2f\n", qtyMonitor, "Monitor", priceMonitor, totalMonitor);
    printf("%-5d %-18s %12.2f %15.2f\n", qtyFlash, "Flash Drive", priceFlash, totalFlash);
    printf("%-5d %-18s %12.2f %15.2f\n", qtyHard, "Hard Drive", priceHard, totalHard);
    printf("%-5d %-18s %12.2f %15.2f\n", qtyPrinter, "Deskjet Printer", pricePrinter, totalPrinter);

    printf("============================================================\n");
    printf("%-30s %20.2f\n", "Subtotal:", subtotal);
    printf("%-30s %20.2f\n", "Tax (8.35%):", tax);
    printf("%-30s %20.2f\n", "Total:", finalTotal);
    printf("============================================================\n");

    return 0;
}
