#include <iostream>
#include <vector>
#include <cmath>

// ============================================================
// A 2D matrix in C++ is a "vector of vectors": vector<vector<double>>.
// Each inner vector is one row.
//
//   matrix[row][col]
//
// A neural network LAYER stores its weights as a matrix:
//   - one row per output neuron
//   - one column per input
// ============================================================

// Convenience alias so we don't type the long type everywhere.
using Vector = std::vector<double>;
using Matrix = std::vector<std::vector<double>>;

double sigmoid(double z) {
    return 1.0 / (1.0 + std::exp(-z));
}

// Matrix-vector multiply: for each row, take the dot product with the input.
// W has shape [num_outputs][num_inputs], input has size [num_inputs].
// Result has size [num_outputs].
Vector matvec(const Matrix& W, const Vector& input) {
    Vector result(W.size(), 0.0);   // one entry per row, all starting at 0
    for (int row = 0; row < W.size(); row++) {
        double dot = 0.0;
        for (int col = 0; col < input.size(); col++) {
            dot += W[row][col] * input[col];
        }
        result[row] = dot;
    }
    return result;
}

// Add a bias vector element-wise: result[i] = a[i] + b[i].
Vector add(const Vector& a, const Vector& b) {
    Vector result(a.size(), 0.0);
    for (int i = 0; i < a.size(); i++) {
        result[i] = a[i] + b[i];
    }
    return result;
}

// Apply sigmoid to every element.
Vector apply_sigmoid(const Vector& v) {
    Vector result(v.size(), 0.0);
    for (int i = 0; i < v.size(); i++) {
        result[i] = sigmoid(v[i]);
    }
    return result;
}

void print_vector(const std::string& name, const Vector& v) {
    std::cout << name << " = [ ";
    for (double x : v) std::cout << x << " ";
    std::cout << "]\n";
}

int main() {
    // A layer with 2 inputs and 3 output neurons.
    // weights[neuron][input]
    Matrix weights = {
        {0.1, 0.2},   // neuron 0's weights for input0, input1
        {0.3, 0.4},   // neuron 1
        {0.5, 0.6}    // neuron 2
    };
    Vector biases = {0.0, -0.1, 0.2};
    Vector input  = {1.0, 2.0};

    std::cout << "=== One full layer ===\n";
    print_vector("input", input);

    // Step 1: z = W * input   (the weighted sums)
    Vector z = matvec(weights, input);
    print_vector("z (W*input)", z);

    // Step 2: z = z + bias
    z = add(z, biases);
    print_vector("z + bias", z);

    // Step 3: a = sigmoid(z)   (the activations -- this layer's output)
    Vector output = apply_sigmoid(z);
    print_vector("output = sigmoid(z)", output);

    return 0;
}
