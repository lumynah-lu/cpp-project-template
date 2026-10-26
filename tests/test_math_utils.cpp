#include <gtest/gtest.h>

#include "template/math_utils.hpp"

using namespace cpp_template;

TEST(GcdTest, BasicCases) {
    EXPECT_EQ(gcd(48, 36), 12);
    EXPECT_EQ(gcd(0, 7), 7);
    EXPECT_EQ(gcd(-48, 36), 12);
}

TEST(FactorialTest, BasicCases) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(5), 120);
}

TEST(FactorialTest, NegativeThrows) {
    EXPECT_THROW(factorial(-1), std::invalid_argument);
}

TEST(IsPrimeTest, BasicCases) {
    EXPECT_FALSE(is_prime(1));
    EXPECT_TRUE(is_prime(2));
    EXPECT_TRUE(is_prime(97));
    EXPECT_FALSE(is_prime(100));
}
