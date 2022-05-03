﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 3.6/B1.h"
#include "../OOP 3.6/B1.cpp"
#include "../OOP 3.6/B2.h"
#include "../OOP 3.6/B2.cpp"
#include "../OOP 3.6/D1.h"
#include "../OOP 3.6/D1.cpp"
#include "../OOP 3.6/D2.h"
#include "../OOP 3.6/D2.cpp"
#include "../OOP 3.6/D3.h"
#include "../OOP 3.6/D3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 3;
			B1 b(a);
			Assert::AreEqual(a, b.get_b1());
		}
	};
}
