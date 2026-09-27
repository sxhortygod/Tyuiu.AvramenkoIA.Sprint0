#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AvramenkoIA.Sprint0.Task5.V3.Lib/Tyuiu.AvramenkoIA.Sprint0.Task5.V3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod3)
		{
			ISprint0Task5* service = new Service3();

			int res = service->Zadacha(5.45f, 2.5f, 3.0f);

			Assert::AreEqual(10, res);



		}
	};
}
