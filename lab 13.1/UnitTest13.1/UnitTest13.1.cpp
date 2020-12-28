#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 13.1/var.cpp"
#include "../lab 13.1/var.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			nsVar::n = 4;
			Assert::AreEqual(nsVar::n, 4);
		}
	};
}
