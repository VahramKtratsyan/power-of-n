#include <gtest/gtest.h>
#include "../header/power.hpp"

TEST(Power_of_n, 0_power_0_is_equal_to_1)
{
    EXPECT_EQ(power(0,0), 1);
}

TEST(Power_of_n, 0_power_1_is_equal_to_0)
{
    EXPECT_EQ(power(0,1), 0);
}

TEST(Power_of_n, 0_power_2_is_equal_to_0)
{
    EXPECT_EQ(power(0,2), 0);
}

TEST(Power_of_n, 1_power_1_is_equal_to_1)
{
    EXPECT_EQ(power(1,1), 1);
}

TEST(Power_of_n, 1_power_2_is_equal_to_1)
{
    EXPECT_EQ(power(1,2), 1);
}

TEST(Power_of_n, 2_power_1_is_equal_to_2)
{
    EXPECT_EQ(power(2,1), 2);
}

TEST(Power_of_n, 3_power_1_is_equal_to_3)
{
    EXPECT_EQ(power(3,1), 3);
}

TEST(Power_of_n, 2_power_2_is_equal_to_4)
{
    EXPECT_EQ(power(2,2), 4);
}

TEST(Power_of_n, 3_power_2_is_equal_to_9)
{
    EXPECT_EQ(power(3,2), 9);
}

TEST(Power_of_n, 11_power_2_is_equal_to_121)
{
    EXPECT_EQ(power(11,2), 121);
}

TEST(Power_of_n, 2_power_3_is_equal_to_8)
{
    EXPECT_EQ(power(2,3), 8);
}

TEST(Power_of_n, 4_power_3_is_equal_to_64)
{
    EXPECT_EQ(power(4,3), 64);
}

TEST(Power_of_n, 7_power_6_is_equal_to_117649)
{
    EXPECT_EQ(power(7,6), 117649);
}

TEST(Power_of_n, 21_power_7_is_equal_to_1801088541)
{
    EXPECT_EQ(power(21,7), 1801088541);
}

TEST(Power_of_n, Minus1_power_0_is_equal_to_1)
{
    EXPECT_EQ(power(-1,0), 1);
}

TEST(Power_of_n, Minus2_power_0_is_equal_to_1)
{
    EXPECT_EQ(power(-2,0), 1);
}

TEST(Power_of_n, Minus1_power_1_is_equal_to_minus1)
{
    EXPECT_EQ(power(-1,1), -1);
}

TEST(Power_of_n, Minus2_power_1_is_equal_to_minus2)
{
    EXPECT_EQ(power(-2,1), -2);
}

TEST(Power_of_n, Minus2_power_2_is_equal_to_4)
{
    EXPECT_EQ(power(-2,1), -2);
}

TEST(Power_of_n, Minus3_power_3_is_equal_to_minus27)
{
    EXPECT_EQ(power(-3,3), -27);
}

TEST(Power_of_n, Minus25_power_6_is_equal_to_minus244140625)
{
    EXPECT_EQ(power(-25,6), 244140625);
}

TEST(Power_of_n, Minus101_power_5_is_equal_to_minus10510100501)
{
    EXPECT_EQ(power(-101,5), -10510100501);
}

//for negative powers
TEST(Power_of_n, 1_power_minus1_is_equal_to_1)
{
    EXPECT_EQ(power(1,-1), 1);
}

TEST(Power_of_n, 1_power_minus2_is_equal_to_1)
{
    EXPECT_EQ(power(1,-2), 1);
}

TEST(Power_of_n, 1_power_minus245_is_equal_to_1)
{
    EXPECT_EQ(power(1,-245), 1);
}

TEST(Power_of_n, 2_power_minus1_is_equal_to_0point5)
{
    EXPECT_EQ(power(2,-1), 0.5);
}

TEST(Power_of_n, 3_power_minus1_is_equal_to_0point333333)
{
    EXPECT_NEAR(power(3,-1), 0.333333, 1e-5);
}

TEST(Power_of_n, 700_power_minus1_is_equal_to_0point001428)
{
    EXPECT_NEAR(power(700,-1), 0.001428, 1e-5);
}

TEST(Power_of_n, 2_power_minus2_is_equal_to_0point25)
{
    EXPECT_EQ(power(2,-2), 0.25);
}

TEST(Power_of_n, 2_power_minus3_is_equal_to_0point125)
{
    EXPECT_EQ(power(2,-3), 0.125);
}

TEST(Power_of_n, 2_power_minus10_is_equal_to_0point000976)
{
    EXPECT_NEAR(power(2,-10), 0.000976, 1e-5);
}

TEST(Power_of_n, 3_power_minus2_is_equal_to_0point111111)
{
    EXPECT_NEAR(power(3,-2), 0.111111, 1e-5);
}

TEST(Power_of_n, 3_power_minus8_is_equal_to_0point000152)
{
    EXPECT_NEAR(power(3,-8), 0.000152, 1e-5);
}

TEST(Power_of_n, 15_power_minus7_is_equal_to_0point000001)
{
    EXPECT_NEAR(power(15,-5), 0.000001, 1e-5);
}

//for negative number of negative powers
TEST(Power_of_n, minus1_power_minus1_is_equal_to_minus1)
{
    EXPECT_EQ(power(-1, -1), -1);
}

TEST(Power_of_n, minus1_power_minus2_is_equal_to_1)
{
    EXPECT_EQ(power(-1, -2), 1);
}

TEST(Power_of_n, minus2_power_minus1_is_equal_to_minus0point5)
{
    EXPECT_EQ(power(-2, -1), -0.5);
}

TEST(Power_of_n, minus2_power_minus2_is_equal_to_0point25)
{
    EXPECT_EQ(power(-2, -2), 0.25);
}

TEST(Power_of_n, minus14_power_minus4_is_equal_to_0point000026)
{
    EXPECT_NEAR(power(-14, -4), 0.000026, 1e-5);
}

TEST(Power_of_n, minus14_power_minus3_is_equal_to_minus0point000364)
{
    EXPECT_NEAR(power(-14, -3), -0.000364, 1e-5);
}