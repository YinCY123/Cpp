#include <iostream>
#include <cmath>   // math library: gives us exp(), sqrt(), pow(), etc.

int main() {
    double a = 7.0;
    double b = 2.0;

    // === The five basic arithmetic operators ===
    std::cout << "a + b = " << a + b << "\n";   // addition
    std::cout << "a - b = " << a - b << "\n";   // subtraction
    std::cout << "a * b = " << a * b << "\n";   // multiplication
    std::cout << "a / b = " << a / b << "\n";   // division
    std::cout << "fmod  = " << std::fmod(a, b) << "\n";  // remainder for doubles

    // WARNING: integer division throws away the decimal part!
    int x = 7;
    int y = 2;
    std::cout << "\ninteger 7 / 2 = " << x / y << "  <-- not 3.5! decimals are dropped\n";
    std::cout << "double  7 / 2 = " << 7.0 / 2.0 << "  <-- correct\n";

    // === Math functions from <cmath> (we need these for neural nets) ===
    std::cout << "\n=== Math functions ===\n";
    std::cout << "exp(1.0)   = " << std::exp(1.0) << "   (e^1)\n";
    std::cout << "pow(2, 10) = " << std::pow(2.0, 10.0) << "\n";
    std::cout << "sqrt(16)   = " << std::sqrt(16.0) << "\n";

    // === Building the sigmoid activation function ===
    // sigmoid(z) = 1 / (1 + e^(-z))
    // It squashes any number into the range (0, 1). We'll use it a lot.
    double z = 0.5;
    double sigmoid = 1.0 / (1.0 + std::exp(-z));
    std::cout << "\n=== Sigmoid activation ===\n";
    std::cout << "sigmoid(" << z << ") = " << sigmoid << "\n";

    // Try a few values to see the squashing effect
    double values[] = {-5.0, -1.0, 0.0, 1.0, 5.0};
    for (double v : values) {
        double s = 1.0 / (1.0 + std::exp(-v));
        std::cout << "sigmoid(" << v << ") = " << s << "\n";
    }

    return 0;
}
