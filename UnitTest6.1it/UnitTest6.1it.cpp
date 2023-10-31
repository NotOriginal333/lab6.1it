#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1it/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int r[n] = { 2, 4, 6, 8, 10 };
			int expS = 0;
			int k = 0;
			for (int i = 0; i < n; i++) {
				if (!(r[i] % 2 != 0 || i % 7 == 0)) {
					expS += r[i];
					k++;
				}
			}
			int s = Sum(r, n, k);
			Assert::AreEqual(s,expS);
		}
	};
}
