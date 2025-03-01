#include <gtest/gtest.h>

TEST(basic_suite, basic_successful_test)
{
    ASSERT_EQ(1, 1);
}

TEST(basic_suite, basic_failing_test)
{
    ASSERT_EQ(2, 2);
}
