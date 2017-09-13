//
//  change-lab.c
//  change-lab
//  Instructor: Ronald Burgher Class: CSCI-112
//  Created by Shana Moore on 9/13/17.
//  Copyright © 2017 Shana Moore. All rights reserved.

/* Compute the minimum number of bills and coins needed
 to make change for a particular purchase */

#include <stdio.h>

#define COST_OF_ITEM 21.17
#define AMOUNT_TENDERED 100.00
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int main(void) {
    // Declare variables with appropriate data types
    FILE *fp = NULL;
    
    int change = 0, twenties = 0, tens = 0, fives = 0,
    ones = 0, quarters = 0, dimes = 0,
    nickels = 0, pennies = 0;
    
    // Perform calculations and assign values to variables
    change = (AMOUNT_TENDERED - COST_OF_ITEM)*100;
    
    twenties = change / (TWENTY * 100);
    change = change % (TWENTY * 100);
    
    tens = change / (TEN * 100);
    change = change % (TEN * 100);
    
    fives = change / (FIVE * 100);
    change = change % (FIVE * 100);
    
    ones = change / (ONE * 100);
    change = change % (ONE * 100);
    
    quarters = change / QUARTER;
    change = change % QUARTER;
    
    dimes = change / DIME;
    change = change % DIME;
    
    nickels = change / NICKEL;
    change = change % NICKEL;
    
    pennies = change / PENNY;
    change = change % PENNY;
    
    // Open file
    fp = fopen("csis.txt", "w");
    
    /* Display output (weight in lbs) listed by planet and
     output to file */
    printf("Bills:\n ");
    fprintf(fp, "Bills:\n ");
    
    printf("%8s: %d \n", "Twenties", twenties);
    fprintf(fp, "%8s: %d \n", "Twenties", twenties);
    
    printf("%8s: %d \n", "Tens", tens);
    fprintf(fp, "%8s: %d \n", "Tens", tens);
    
    printf("%8s: %d \n", "Fives", fives);
    fprintf(fp, "%8s: %d \n", "Fives", fives);
    
    printf("%8s: %d \n\n", "Ones", ones);
    fprintf(fp, "%8s: %d \n\n", "Ones", ones);
    
    printf("Coins:\n ");
    fprintf(fp, "Coins:\n ");
    
    printf("%8s: %d \n", "Quarters", quarters);
    fprintf(fp, "%8s: %d \n", "Quarters", quarters);
    
    printf("%8s: %d \n", "Dimes", dimes);
    fprintf(fp, "%8s: %d \n", "Dimes", dimes);
    
    printf("%8s: %d \n", "Nickels", nickels);
    fprintf(fp, "%8s: %d \n", "Nickels", nickels);
    
    printf("%8s: %d \n", "Pennies", pennies);
    fprintf(fp, "%8s: %d \n", "Pennies", pennies);
    
    //Close file
    fclose(fp);
    
    return 0;
}
