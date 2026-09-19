#include <iostream>
#include <cmath>

// ============================================================
// A function is a reusable block of code with a name.
// Structure:   return_type  name(parameters) { ... return value; }
// ============================================================

// The sigmoid activation function.
// Takes one double (z), returns one double.
double sigmoid(double z) {
    return 1.0 / (1.0 + std::exp(-z));
}

// The derivative of sigmoid -- we'll need this for backpropagation later.
// A neat fact: sigmoid'(z) = sigmoid(z) * (1 - sigmoid(z))
double sigmoid_derivative(double z) {
    double s = sigmoid(z);
    return s * (1.0 - s);
}

// A single neuron: weighted input + bias, then activation.
// This bundles up everything from the earlier lessons.
double neuron(double input, double weight, double bias) {
    double z = input * weight + bias;   // the linear part
    return sigmoid(z);                  // the activation
}

// A function can return void (nothing) -- used for actions like printing.
void print_banner(const char* title) {
    std::cout << "=== " << title << " ===\n";
}

int main() {
    print_banner("Using functions");

    // Call a function by writing its name and passing arguments.
    std::cout << "sigmoid(0.0) = " << sigmoid(0.0) << "\n";
    std::cout << "sigmoid(2.0) = " << sigmoid(2.0) << "\n";
    std::cout << "sigmoid_derivative(0.0) = " << sigmoid_derivative(0.0) << "\n";

    print_banner("A single neuron");
    double out = neuron(1.5, 0.8, -0.2);
    std::cout << "neuron(input=1.5, w=0.8, b=-0.2) = " << out << "\n";

    // Functions make loops clean: compute many neurons without repeating math.
    print_banner("Sweeping inputs through a neuron");
    for (double input = -2.0; input <= 2.0; input += 1.0) {
        std::cout << "input " << input << " -> " << neuron(input, 0.8, -0.2) << "\n";
    }

    return 0;
}
