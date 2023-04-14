#include "pch.h"
#include "CppUnitTest.h"
#include "..\Application\Application.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			CoolClass coolClass;
			//Removed one parameter to induce compiler error
			Assert::AreEqual(coolClass.Calc(1, 2));
		}

		TEST_METHOD(TestMethod2)
		{

			CoolClass coolClass;
			Assert::AreEqual(5, coolClass.Calc(3, 2));
		}
	};
}
