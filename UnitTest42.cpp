#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab4.2/Human.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest42
{
	TEST_CLASS(UnitTest42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Human H(36, "Helen");
			string s = "[ Kind: Human, Age: 36, Name: Helen ]";
			Assert::AreEqual(H.Description(), s);

		}
	};
}
