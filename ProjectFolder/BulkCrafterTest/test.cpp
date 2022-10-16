#include "pch.h"
#include "../ProjectFiles/Source/BulkCrafter/StandardBulkCrafter.h"
#include "../ProjectFiles/Source/BulkCrafter/StandardBulkCrafter.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

class BulkCrafterTest : public ::testing::Test {
protected:
	StandardBulkCrafter* bc;

	void SetUp() override {
		bc = new StandardBulkCrafter(CoordinateInBlocks(0, 0, 100));
	}

	void TearDown() override {
		delete bc;
	}
};

TEST_F(BulkCrafterTest, ShouldNotBeActiveAfterCreation) {
	EXPECT_FALSE(bc->isActive());
}