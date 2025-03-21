#include <stdio.h>
#include <math.h>
#include "IsPrime.h"


//check if number is prime number

int isPrime(int input) {
	int isprime = 0;
	
	//sqrt(input)
	// sometimes the above function breaks so this a a failsafe for 2
	
	

	
	// for numbers past 10
	for (int i = 2; i < input/2 ; i++) {
		
		if (i*i == input) {
			isprime = 0;
		}
		else {
			isprime = 1;
		}


	}



	//check for the first prime numbers under 10

	if (input == 2 || input == 3 || input == 5 || input == 7) {
		isprime = 1;
	}


	//check for the non prime numbers up to 10
	if (input == 4 || input == 6 || input == 8 || input == 9 || input == 10) {
		isprime = 0;
	}

	//encase of negatives or 0
	if (input <= 1) {

		isprime = 0;

	}

	if (isprime == 1) {

		printf("is Prime");
	}
	else if (isprime == 0) {

		printf("NOT Prime");

	}

	return (isprime);
}