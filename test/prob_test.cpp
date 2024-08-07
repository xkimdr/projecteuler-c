#include <gtest/gtest.h>

extern "C" {
#include "pe.h"
}

TEST(P001, aop) { EXPECT_EQ(aop_001(), 233168); }

TEST(P002, aop) { EXPECT_EQ(aop_002(), 4613732); }

TEST(P003, aop) { EXPECT_EQ(aop_003(), 6857); }

TEST(P004, aop) { EXPECT_EQ(aop_004(), 906609); }

TEST(P005, aop) { EXPECT_EQ(aop_005(), 232792560); }

TEST(P006, aop) { EXPECT_EQ(aop_006(), 25164150); }

TEST(P007, aop) { EXPECT_EQ(aop_007(), 104743); }
