// UnitTest_SimpleMath.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "simplemath.h"


TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, cubic(10));
}