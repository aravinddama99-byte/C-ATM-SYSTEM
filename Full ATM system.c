#include <stdio.h>
int main() {
    int choosen_option;
    float balance = 5000;
    float amount;
    
    do {
        printf("\n------Welcome to SBI bank------\n");
        printf("1. Check Balance\n");
        printf("2.Withdraw amount\n");
        printf("3.Deposit amount\n");
        printf("4.Exit\n");
        
        printf("Please type the serial number of the above option: ");
        scanf("%d", &choosen_option);
        
        switch(choosen_option) {
           case 1:
           printf("Your balance is : %f", balance);
           break;
           
           case 2: 
           printf("Please enter the withdrawal amount: ");
           scanf("%f", &amount);
           
           if (amount > balance) {
            
            printf("Insufficent balance");
           }
           
          else if (amount < 50) {
           
           printf("The minimum withdrawal amount is atleast 50rs\n");
           
          }      
           
           else if (amount == balance) {
               printf("That will be the total amount in the account you are withdrawing.");
               
           }
           
           else {
               
            balance = balance - amount;
            printf("withdrawal successful! YAY!");
            printf("\nRemaining balance is %f\n", balance);
            
           }
           
           break;
           
           case 3:
           printf("Enter deposit amount: ");
           scanf("%f", &amount);
           
           if (amount<=0) {
               
               printf("Invalid amount of money");
               
           }
           
           else {
               
               balance = balance + amount;
               printf("Deposit successful!");
               printf("\nNew balance : %f", balance);
               
           }
           
           break;
           
           default:
                printf("Thank you!!");
                
        }
    } while(choosen_option != 4);
    
    return 0;
}