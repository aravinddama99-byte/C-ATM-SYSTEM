ATM pin problem

solution:-

#include <stdio.h>

int main() {
    
int correct_password = 1543;
int your_PIN;
int attempts = 0;

      printf("----- ATM PIN------\n");


printf("Enter your PIN: ");
scanf("%d", &your_PIN);

while (correct_password!=your_PIN && attempts < 2) {
    
    attempts++;
    
    printf("Wrong PIN! Please Try Again!\n");
    printf("Enter your PIN: ");
    scanf("%d", &your_PIN);
    
}
    
    if(correct_password==your_PIN){
        
        printf("Correct PIN! You can now access your account!\n");
        
    }
    else
    {
        printf("Your ATM account has been blocked due to multiple attempts. Please try again later.");
    }
     return 0;
}
