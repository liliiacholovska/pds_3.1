#include "pch.h"
#include "CppUnitTest.h"
#include "../pds_3/pds_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestFactorial)
        {
            Assert::AreEqual(1, factorial(0));
            Assert::AreEqual(1, factorial(1));
            Assert::AreEqual(2, factorial(2));
            Assert::AreEqual(6, factorial(3));
            Assert::AreEqual(24, factorial(4));
            Assert::AreEqual(120, factorial(5));
        }

        TEST_METHOD(TestArrangements)
        {
            Assert::AreEqual(3024, arrangements(9, 4));
            Assert::AreEqual(1, arrangements(5, 0));
            Assert::AreEqual(20, arrangements(5, 2));
            Assert::AreEqual(120, arrangements(5, 5));
        }
	};
}