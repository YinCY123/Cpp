#include <iostream>
#include <vector>   // gives us std::vector<T>

// std::vector<T> is a dynamic array: a list that can grow and shrink.
// T is the type it holds (e.g., double, int).

int main() {
    // ============================================================
    // Creating a vector
    // ============================================================
    std::vector<double> weights = {0.5, 0.8, -0.3};  // holds 3 doubles
    std::vector<double> inputs = {1.0, 2.0, 0.5};

    // ============================================================
    // Accessing elements: use [index], starting from 0
    // ============================================================
    std::cout << "=== Individual elements ===\n";
    std::cout << "weights[0] = " << weights[0] << "\n";
    std::cout << "weights[1] = " << weights[1] << "\n";
    std::cout << "weights[2] = " << weights[2] << "\n";

    // ============================================================
    // Getting the size
    // ============================================================
    std::cout << "\nweights has " << weights.size() << " elements\n";

    // ============================================================
    // Looping over a vector (the most common operation)
    // ============================================================
    std::cout << "\n=== Loop over inputs ===\n";
    for (int i = 0; i < inputs.size(); i++) {
        std::cout << "inputs[" << i << "] = " << inputs[i] << "\n";
    }

    // Modern C++ range-based for loop (cleaner when you don't need the index)
    std::cout << "\n=== Range-based loop ===\n";
    for (double w : weights) {
        std::cout << w << " ";
    }
    std::cout << "\n";

    // ============================================================
    // Creating an empty vector and filling it
    // ============================================================
    std::vector<double> outputs;   // empty
    outputs.push_back(1.5);         // append to the end
    outputs.push_back(2.3);
    outputs.push_back(0.7);
    std::cout << "\noutputs now has " << outputs.size() << " elements\n";

    // ============================================================
    // NEURAL NETWORK USE: dot product (weighted sum)
    // This is the core operation of every neuron.
    // ============================================================
    std::cout << "\n=== Dot product: inputs • weights ===\n";
    double dot = 0.0;
    for (int i = 0; i < inputs.size(); i++) {
        dot += inputs[i] * weights[i];   // += means "add to"
    }
    std::cout << "inputs • weights = " << dot << "\n";

    double bias = -0.2;
    double z = dot + bias;
    std::cout << "z = dot + bias = " << z << "\n";
    // In the next lesson we'll wrap this in a sigmoid to get the neuron output.

    return 0;
}
