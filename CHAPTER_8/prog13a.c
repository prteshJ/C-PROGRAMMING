// Function to return 1 if number is prime and other wise return 0 
// Uses global variables instead of function arguments

#include <stdio.h>

int number;

int checkPrime() {
        int prime = 2;

        if(number == 1 || number < 0 || number == 0)
                return -1;
        for(prime = 2;prime < number;++prime) {
                if(number % prime == 0)
                return 0;
        }

        return 1;
}

int main(void) {
        int isPrime;

        printf("Enter a number: ");
        scanf("%i",&number);

        isPrime = checkPrime();

        printf("The isPrime returned %i\n", isPrime);

        return 0;
}
