#include "gtest/gtest.h"

struct Test1 : testing::Test {
	Test1() {
		// initiate properties
	}
	virtual ~Test1() {
		// delete properties 
	}
};

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}