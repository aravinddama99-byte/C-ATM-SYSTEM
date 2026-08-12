finding if the number is prime or non prime(composite):

solution:-

#include <stdio.h>

int main() {
    int number;
    int composite = 0;
    
    printf("Enter the Number: ");
    scanf("%d", &number);
    
    if (number==1){
        printf("this number is neither composite nor prime");
        
    }
    else {
        composite=0;
    }
    for (int x = 2; x < number; x++)
    {
    
    if (number % x == 0)
    {
        composite=1;
        break;
    }
    
    }
    
    if (composite==1) {
        printf("This is a composite number");
    }
    else 
    {
    printf("this is a prime number");
    }
    
       
     return 0;
}
