// UnitTest_SimpleMath.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "simplemath.h"


TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, cubic(10));
}