#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_2.1\Number.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number n(10, 13);
			n++;
			++n;
			Assert::IsTrue(n.getFirst() == 11 && n.getSecond() == 14);
		}
	};
}
