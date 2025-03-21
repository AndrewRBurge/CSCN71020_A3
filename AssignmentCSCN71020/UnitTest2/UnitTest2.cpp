#include "pch.h"
#include "CppUnitTest.h"
//extern "C" ;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int isPrime(int input) {
	int isprime = 0;
	if (input <= 1) {

		isprime = 0;

	}

	for (int i = 2; i < sqrt(input); i++) {

		if (input / i == 1) {
			isprime = 1;
		}
		else {
			isprime = 0;
		}

	}

	if (isprime == 1) {

		printf("is Prime");
	}
	else {

		printf("NOT Prime");

	}

	return isprime;
}

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int Result = 0;
			int isprime = isPrime(0);
			Result = isprime;
			Assert::AreEqual(4, Result);
			printf("working");


		}
	};
}
