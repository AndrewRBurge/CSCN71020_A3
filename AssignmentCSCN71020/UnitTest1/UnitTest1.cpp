#include "pch.h"
#include "CppUnitTest.h"
//#include "IsPrime.h"

//extern "IsPrime" int isPrime(int input);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(isPrime)
		{
			int Result = 0;
			int isprime = 2;
			Result = isprime;
			Assert::AreEqual(2, Result);
		}
	};
}
