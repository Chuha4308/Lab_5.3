#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.3/Lb_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			double result = f(2.0);
			double expected = cos(1.0) / (1 + pow(sin(2.0), 2));
			Assert::AreEqual(result, expected, 0.001);
		}
	};
}

