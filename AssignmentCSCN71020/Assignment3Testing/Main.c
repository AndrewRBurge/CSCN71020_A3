#include <stdio.h>
#include "IsPrime.h"

//test

// Andrew Burge assignment 3 

//test to see if program outputs if the number is prime. basicllay if the program works as indended
int TestPrimeNumberOutput(int input, int testnumber) {

	int Result = 0;
	int isprime = isPrime(input);
	Result = isprime;

	//will return failed if anything other than a prime number is inputed
	if (Result == 1) {
		printf(" output test %d successful\n", testnumber);

	}
	else {
		printf(" output test %d failed\n", testnumber);
	}
	


}

//test to see if an input that is anything other than a prime number
int TestnonPrimeNumber(int input, int testnumber) {

	int Result = 0;
	int isprime = isPrime(input);
	Result = isprime;

	// will return as failed if a prime number is present
	if (Result != 1) {
		printf(" output test %d successful\n", testnumber);

	}
	else {
		printf(" output test %d failed\n", testnumber);
	}
}





int main(void) {


	//test Prime numbers
	TestPrimeNumberOutput(2, 1);
	TestPrimeNumberOutput(3, 2);
	TestPrimeNumberOutput(5, 3);
	TestPrimeNumberOutput(7, 4);
	
	//test none Prime numbers
	TestnonPrimeNumber(4,5);
	TestnonPrimeNumber(6, 6);
	TestnonPrimeNumber(8, 7);

	//test edge cases
	TestnonPrimeNumber(0, 8);
	TestnonPrimeNumber(1, 9);
	TestnonPrimeNumber(10, 10);

	// test for large numbers past 10
	TestPrimeNumberOutput(79, 13);
	TestPrimeNumberOutput(29, 14);
	TestPrimeNumberOutput(31, 15);
	TestPrimeNumberOutput(53, 16);
	TestPrimeNumberOutput(67, 17);

}