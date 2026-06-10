#include <iostream>
#include <vector>

// By default, C++ COPIES arguments into functions. For a single double
// that's cheap. For a big vector it's wasteful, and changes inside the
// function are LOST because they happen on the copy.

// Pass by VALUE (a copy). Changes here do NOT affect the original.
void try_to_zero_value(std::vector<double> v) {
    for (int i = 0; i < v.size(); i++) v[i] = 0.0;
}

// Pass by REFERENCE (&). Works on the ORIGINAL, no copy.
void zero_in_place(std::vector<double>& v) {
    for (int i = 0; i < v.size(); i++) v[i] = 0.0;
}

// Pass by CONST REFERENCE. No copy (fast) and promises not to modify.
// This is the standard way to pass big read-only data.
double sum(const std::vector<double>& v) {
    double total = 0.0;
    for (double x : v) total += x;
    return total;
}

int main() {
    std::vector<double> data = {1.0, 2.0, 3.0};

    try_to_zero_value(data);
    std::cout << "After by-value call: ";
    for (double x : data) std::cout << x << " ";
    std::cout << " <-- unchanged (only the copy was zeroed)\n";

    std::cout << "sum(data) = " << sum(data) << "\n";

    zero_in_place(data);
    std::cout << "After by-reference call: ";
    for (double x : data) std::cout << x << " ";
    std::cout << " <-- actually zeroed\n";

    // A plain reference is an ALIAS: another name for the same variable.
    double weight = 0.5;
    double& alias = weight;
    alias = 0.9;
    std::cout << "\nweight is now " << weight << " (changed via its alias)\n";

    return 0;
}
