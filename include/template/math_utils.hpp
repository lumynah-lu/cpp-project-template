#pragma once

#include <cstdint>

namespace cpp_template {

// Greatest common divisor (Euclidean algorithm).
std::int64_t gcd(std::int64_t a, std::int64_t b);

// Factorial of a non-negative integer.
std::int64_t factorial(int n);

// Primality test.
bool is_prime(std::int64_t n);

}  // namespace cpp_template
