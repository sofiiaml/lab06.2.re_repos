#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2.re/PR6.2.re.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62re
{
	TEST_CLASS(UnitTest62re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 6;
			int a[6] = { 2,5,4,3,6,7 };
			int index = maxEvenIndex(a,n,0,-1);
			Assert::AreEqual(4, index);
		}
	};
}
