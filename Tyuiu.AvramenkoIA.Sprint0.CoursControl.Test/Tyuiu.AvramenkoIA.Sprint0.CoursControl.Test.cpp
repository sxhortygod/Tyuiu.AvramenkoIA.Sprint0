#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AvramenkoIA.Sprint0.CoursControl.Lib/Tyuiu.AvramenkoIA.Sprint0.CoursControl.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0
{
	TEST_CLASS(UnitTest0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* SolveServiceV0 = new ControlService();

			int res = SolveServiceV0->Control(555);

			Assert::AreEqual(125, res);
		}

		TEST_METHOD(TestMethod3)
		{
			ISprint0Task8V3* SolveServiceV3 = new ControlService2();

			int res = SolveServiceV3->Proizved(3.0f, 2.0f, 4.0f);

			Assert::AreEqual(5, res);
		}
	};
}
