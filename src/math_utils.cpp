#include "template/math_utils.hpp"

#include <stdexcept>

namespace cpp_template {

std::int64_t gcd(std::int64_t a, std::int64_t b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        const std::int64_t r = a % b;
        a = b;
        b = r;
    }
    return a;
}

std::int64_t factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("factorial requires n >= 0");
    }
    std::int64_t result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

bool is_prime(std::int64_t n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0) return false;
    for (std::int64_t i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

}  // namespace cpp_template
