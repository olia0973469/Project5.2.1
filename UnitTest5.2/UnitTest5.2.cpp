﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(1, 2, 3);
			Assert::AreEqual(t, -1.8, 0.0000001);
		}
	};
}
