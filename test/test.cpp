#include <gtest/gtest.h>
#include "power.hpp"

TEST(Power_of_n, 0_power_0_is_equal_to_1)
{
    ASSERT_EQ(power(0,0), 1);
}

TEST(Power_of_n, 0_power_1_is_equal_to_0)
{
    ASSERT_EQ(power(0,1), 0);
}

TEST(Power_of_n, 0_power_2_is_equal_to_0)
{
    ASSERT_EQ(power(0,2), 0);
}

TEST(Power_of_n, 1_power_1_is_equal_to_1)
{
    ASSERT_EQ(power(1,1), 1);
}

TEST(Power_of_n, 1_power_2_is_equal_to_1)
{
    ASSERT_EQ(power(1,2), 1);
}

TEST(Power_of_n, 2_power_1_is_equal_to_2)
{
    ASSERT_EQ(power(2,1), 2);
}

TEST(Power_of_n, 3_power_1_is_equal_to_3)
{
    ASSERT_EQ(power(3,1), 3);
}

TEST(Power_of_n, 2_power_2_is_equal_to_4)
{
    ASSERT_EQ(power(2,2), 4);
}

TEST(Power_of_n, 3_power_2_is_equal_to_9)
{
    ASSERT_EQ(power(3,2), 9);
}

TEST(Power_of_n, 11_power_2_is_equal_to_121)
{
    ASSERT_EQ(power(11,2), 121);
}

TEST(Power_of_n, 2_power_3_is_equal_to_8)
{
    ASSERT_EQ(power(2,3), 8);
}

TEST(Power_of_n, 4_power_3_is_equal_to_64)
{
    ASSERT_EQ(power(4,3), 64);
}

TEST(Power_of_n, 7_power_6_is_equal_to_117649)
{
    ASSERT_EQ(power(7,6), 117649);
}

TEST(Power_of_n, 21_power_7_is_equal_to_1801088541)
{
    ASSERT_EQ(power(21,7), 1801088541);
}

TEST(Power_of_n, Minus1_power_0_is_equal_to_1)
{
    ASSERT_EQ(power(-1,0), 1);
}

TEST(Power_of_n, Minus2_power_0_is_equal_to_1)
{
    ASSERT_EQ(power(-2,0), 1);
}

TEST(Power_of_n, Minus1_power_1_is_equal_to_minus1)
{
    ASSERT_EQ(power(-1,1), -1);
}

TEST(Power_of_n, Minus2_power_1_is_equal_to_minus2)
{
    ASSERT_EQ(power(-2,1), -2);
}

TEST(Power_of_n, Minus2_power_2_is_equal_to_4)
{
    ASSERT_EQ(power(-2,1), -2);
}

TEST(Power_of_n, Minus3_power_3_is_equal_to_minus27)
{
    ASSERT_EQ(power(-3,3), -27);
}

TEST(Power_of_n, Minus25_power_6_is_equal_to_minus244140625)
{
    ASSERT_EQ(power(-25,6), 244140625);
}

TEST(Power_of_n, Minus101_power_5_is_equal_to_minus10510100501)
{
    ASSERT_EQ(power(-101,5), -10510100501);
}