#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AvramenkoIA.Sprint0.Task4.V3.Lib/Tyuiu.AvramenkoIA.Sprint0.Task4.V3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod3)
		{
			ISprint0Task4* service = new Service2();

			int d = service->Calculate(1, 2, 3);

			Assert::AreEqual(9, d);

		}
	};
}
