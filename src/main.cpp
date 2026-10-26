#include <iostream>

#include "template/math_utils.hpp"

int main() {
    using namespace cpp_template;

    std::cout << "gcd(48, 36) = " << gcd(48, 36) << '\n';
    std::cout << "factorial(5) = " << factorial(5) << '\n';
    std::cout << "is_prime(97) = " << std::boolalpha << is_prime(97) << '\n';

    return 0;
}
