#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.AvramenkoIA.Sprint0.Task6.Lib/Tyuiu.AvramenkoIA.Sprint0.Task6.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UntiTest6
{
	TEST_CLASS(UntiTest3)
	{
	public:
		
		TEST_METHOD(TestMethod3)
		{
			ISprint0Task6* service = new Service4();

			int res = service->Zuul(3, 3);

			Assert::AreEqual(8, res);



		}
	};
}
