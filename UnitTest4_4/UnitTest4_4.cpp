#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop4.4\oop4.4\Container.cpp"
#include "D:\Student\oop4.4\oop4.4\Bubble.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest44
{
	TEST_CLASS(UnitTest44)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bubble mas1(1);
			mas1[0] = 1;
			double t = mas1.foreach1(0);
			Assert::AreEqual(t, 1.0);
		}
	};
}
