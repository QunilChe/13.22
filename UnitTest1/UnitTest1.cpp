#include "pch.h"
#include "CppUnitTest.h"
#include "../13.22/13.22.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = scum(1);
			Assert::AreEqual(t, 2);
		}
	};
}
