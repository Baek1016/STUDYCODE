#include <stdio.h>

int main() {
    int a,num;
    
   printf("Please enter a number:");
    scanf("%d",&num);

    for (a=2; a<num ;a++) {
        if(num%a == 0) {
            printf("It is not a prime number.");
            break;
        }
        else if(a=num-1) {
            printf("It is a prime number.");
            break;
        }
        else{
            printf("Write another number again");
        }
    }
}
