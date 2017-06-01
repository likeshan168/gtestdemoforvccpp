// UnitTest_SimpleMath.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "simplemath.h"
#include "mockcacl.h"

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, cubic(10));
}
//fatal asserttion & Nonfatal assertion
TEST(testMath, myCubeTest2)
{
	//ASSERT_ aborts your function immediately if it fails, thus the second assert will not execute
	ASSERT_EQ(100, cubic(10));
	ASSERT_EQ(10, cubic(10));
	//EXPECT_* macros continue its evaluation, thus we can report more than one failure in our tests
	/*EXPECT_EQ(100, cubic(10));
	EXPECT_EQ(10, cubic(10));*/
}

void Foo(int* p)
{
	std::cerr << "Error on line 16 of Foo";
	exit(1);
}
// death test
TEST(MyDeathTest, Foo) {
	// This death test uses a compound statement.
	ASSERT_DEATH({ int n = 5; Foo(&n); }, "Error on line .* of Foo");
	EXPECT_EXIT({ int n = 5; Foo(&n); }, ::testing::ExitedWithCode(1), "Error on line .* of Foo");
}



TEST(test_main, testmock)
{
	MockCacl mockCalc;
	EXPECT_CALL(mockCalc, Add(1, 2)).Times(1).WillOnce(::testing::Return(3));
	int rst = mockCalc.Add(1, 2);
	EXPECT_EQ(3, rst);
}