//  Generate prime numbers upto 150 using Sieve Of Erastosthenes Algorithm
// The most efficient way to find all small primes less than 10,000,000 

/*
	SIEVE OF ERASTOSTHENES ALGORITHM :

	1] DEFINE AN ARRAY OF N INTEGERS P. SET ALL ELEMENTS OF P[I] TO 0 SUCH THAT 2 <= I <= N;
	2] SET I TO 2.
	3] IF I > N , THE ALGORITHM TERMINATES.
	4] IF P[I] EQUALS TO 0 , THEN I IS PRIME.
	5] FOR ALL POSITIVE INTEGER VALUES OF J, SUCH THAT I * J <= N , SET P[I * J] TO 1.
	6] ADD 1 TO I AND GO TO STEP 3.

*/

#include <stdio.h>

int main(void) {
	int j, n;     

	printf("\nEnter maximum limit till which you want primes(Recommended : 150  Maximum: 999999) ? ");
	scanf("%i", &n);                                                                                 // Using variable length array

	unsigned long long int P[n];                                                                   // Defined an array of integers p 

	int index = 2;                                                                               // Set i to 2

	while(index >= 2 && index <= n) {                                                        
		P[index] = 0;                                                                     // Set all elements of p[i] to 0 such that 2 <= i <= n
		++index;
	}

	P[0] = 1;	                                                                     // Better to set these both to 1
	P[1] = 1;	                                                                    //  since they are anyways not prime

	index = 2;                                                                        // Index needs to be set to 2 unless told to change  

	do {
		if(P[index] == 0)	                                               // If P[i] equals 0 then i is prime
			printf("\t\nPRIME\tNUMBER\t{%i}\t", index);
		for(j = 0; index * j <= n; ++j){                                     // For all positive integer values of j , such that i * j <= n , p[i * j] to 1
			P[index * j] = 1;
		}
		index = index + 1;                                                // Add 1 to i & go to step 3
	}while(index < n);                                                       // This is step 3 , check if i > n , then algorithm terminates

	printf("\n");

	return 0;
}
