/**
 * @file dummy.cpp
 * @author Salvatore Cardamone
 * @brief Basic unit test case.
 */

#include "gtest/gtest.h"
#include "template.hpp"

/**
 * @brief Dummy unit test.
 */
TEST(Dummy, Addition)
{
  EXPECT_EQ(1, 1);
  print();
}
