#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.2(2)/Lab_5.2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1Lab52
{
	TEST_CLASS(UnitTest1Lab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			double l = q(2, 2, 1);
			Assert::AreEqual(l, 1.0);
		}
	};
}
