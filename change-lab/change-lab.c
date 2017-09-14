//
//  change-lab.c
//  change-lab
//  Instructor: Ronald Burgher Class: CSCI-112
//  Created by Shana Moore on 9/13/17.
//  Copyright © 2017 Shana Moore. All rights reserved.

/* Compute the minimum number of bills and coins needed
 to make change for a particular purchase */

#include <stdio.h>

#define TWENTY 20  // conversion constant
#define TEN 10     // conversion constant
#define FIVE 5     // conversion constant
#define ONE 1      // conversion constant
#define QUARTER 25 // conversion constant
#define DIME 10    // conversion constant
#define NICKEL 5   // conversion constant
#define PENNY 1    // conversion constant
#define CURRENCY_FORMAT "%9s: %d \n"

int main(void) {
    // Declare variables with appropriate data types
    FILE *fp = NULL;
    
    int change = 0, twenties = 0, tens = 0, fives = 0,
    ones = 0, quarters = 0, dimes = 0,
    nickels = 0, pennies = 0;
    
    double cost_of_item, amount_tendered;
    
    // Perform calculations and assign values to variables
    
    cost_of_item = 21.17;
    amount_tendered = 100.00;
    
    change = (int)((amount_tendered - cost_of_item)*100);
    
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
    
    /* Display output listed by quantity of denominations and
     output to file */
    printf("Bills:\n");
    fprintf(fp, "Bills:\n");
    
    printf(CURRENCY_FORMAT, "Twenties", twenties);
    fprintf(fp, CURRENCY_FORMAT, "Twenties", twenties);
    
    printf(CURRENCY_FORMAT, "Tens", tens);
    fprintf(fp, CURRENCY_FORMAT, "Tens", tens);
    
    printf(CURRENCY_FORMAT, "Fives", fives);
    fprintf(fp, CURRENCY_FORMAT, "Fives", fives);
    
    printf(CURRENCY_FORMAT, "Ones", ones);
    fprintf(fp, CURRENCY_FORMAT, "Ones", ones);
    
    printf("Coins:\n");
    fprintf(fp, "Coins:\n");
    
    printf(CURRENCY_FORMAT, "Quarters", quarters);
    fprintf(fp, CURRENCY_FORMAT, "Quarters", quarters);
    
    printf(CURRENCY_FORMAT, "Dimes", dimes);
    fprintf(fp, CURRENCY_FORMAT, "Dimes", dimes);
    
    printf(CURRENCY_FORMAT, "Nickels", nickels);
    fprintf(fp, CURRENCY_FORMAT, "Nickels", nickels);
    
    printf(CURRENCY_FORMAT, "Pennies", pennies);
    fprintf(fp, CURRENCY_FORMAT, "Pennies", pennies);
    
    //Close file
    fclose(fp);
    
    return 0;
}
