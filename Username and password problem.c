Username and password problem

solution:-

#include <stdio.h>
#include <string.h>

int main() {
    
    char correct_username[] = "Aravind";
    char correct_password[] = "aravind@1543";
    
    char username[50];
    char password[50];
    
    printf("----- User Login------\n");
    
    int attempts = 0;
    int max_attempts = 3;
    
while (attempts<max_attempts) {
    
    printf("Enter username: ");
    scanf("%49s", username);
    
    printf("Enter your password: ");
    scanf("%49s", password);
    
     if (strcmp(username, correct_username) == 0 &&
            strcmp(password, correct_password) == 0)
    
{
    printf("\nLogin successful!\n");
    return 0;
}
    
 attempts++;
 
 printf("\nWrong username or password!\n");
 printf("Attempts remaining: %d\n", max_attempts - attempts);
}    
    printf("\nAccount locked! Exceeeded the max attempts.\n");
    


     return 0;
}
