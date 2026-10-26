#include <iostream>

#include "template/math_utils.hpp"

// Example: consume the library from an external target.
int main() {
    std::cout << "factorial(10) = " << cpp_template::factorial(10) << '\n';
    return 0;
}
