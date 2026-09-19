#include <iostream>
#include <vector>
#include <cmath>
#include <random>

using Vector = std::vector<double>;
using Matrix = std::vector<std::vector<double>>;

double sigmoid(double z) {
    return 1.0 / (1.0 + std::exp(-z));
}

double sigmoid_derivative(double z) {
    double s = sigmoid(z);
    return s * (1.0 - s);
}

// ============================================================
// Improved Layer class with:
// 1. Random weight initialization (critical for learning)
// 2. Storing intermediate values for backpropagation later
// ============================================================

class Layer {
public:
    int num_inputs;
    int num_outputs;

    Matrix weights;      // [num_outputs][num_inputs]
    Vector biases;       // [num_outputs]

    // Cache for backpropagation (we'll use these in Lesson 13)
    Vector last_input;   // the most recent input
    Vector last_z;       // z = W*input + b (before activation)
    Vector last_output;  // output = sigmoid(z)

    // Constructor with random initialization
    Layer(int inputs, int outputs) {
        num_inputs = inputs;
        num_outputs = outputs;

        // Random number generator setup
        std::random_device rd;   // seed
        std::mt19937 gen(rd());  // Mersenne Twister random number engine

        // For neural networks, initialize weights with small random values
        // around 0. A good rule of thumb: uniform distribution in [-1/√n, 1/√n]
        // where n = number of inputs. This prevents exploding/vanishing gradients.
        double limit = 1.0 / std::sqrt(inputs);
        std::uniform_real_distribution<> dist(-limit, limit);

        // Initialize weights
        weights.resize(outputs); // define the number of rows of weight
        for (int i = 0; i < outputs; i++) {
            weights[i].resize(inputs); // define the number of elements of vector i
            for (int j = 0; j < inputs; j++) {
                weights[i][j] = dist(gen);  // random value in [-limit, limit]
            }
        }

        // Initialize biases to zero (common practice)
        biases.resize(outputs, 0.0);

        // Initialize cache
        last_input.resize(inputs);
        last_z.resize(outputs);
        last_output.resize(outputs);
    }

    // Forward pass: compute output and cache intermediate values
    Vector forward(const Vector& input) {
        // Cache the input (we'll need it for backprop)
        last_input = input;

        // Step 1: z = W * input + b
        for (int i = 0; i < num_outputs; i++) {
            double dot = 0.0;
            for (int j = 0; j < num_inputs; j++) {
                dot += weights[i][j] * input[j];
            }
            last_z[i] = dot + biases[i];
        }

        // Step 2: output = sigmoid(z)
        for (int i = 0; i < num_outputs; i++) {
            last_output[i] = sigmoid(last_z[i]);
        }

        return last_output;
    }

    void print_info() {
        std::cout << "Layer: " << num_inputs << " inputs -> "
                  << num_outputs << " outputs\n";
        std::cout << "Sample weights from first neuron: [ ";
        for (int j = 0; j < std::min(3, num_inputs); j++) {
            std::cout << weights[0][j] << " ";
        }
        if (num_inputs > 3) std::cout << "...";
        std::cout << "]\n";
    }
};

int main() {
    std::cout << "=== Creating layers with random initialization ===\n\n";

    Layer layer1(2, 3);
    layer1.print_info();
    std::cout << "\n";

    Layer layer2(3, 2);
    layer2.print_info();
    std::cout << "\n";

    // Test forward pass
    std::cout << "=== Testing forward pass ===\n";
    Vector input = {0.5, -0.3};
    std::cout << "Input: [ ";
    for (double x : input) std::cout << x << " ";
    std::cout << "]\n";

    Vector hidden = layer1.forward(input);
    std::cout << "After layer1: [ ";
    for (double x : hidden) std::cout << x << " ";
    std::cout << "]\n";

    Vector output = layer2.forward(hidden);
    std::cout << "After layer2: [ ";
    for (double x : output) std::cout << x << " ";
    std::cout << "]\n";

    // Show that each run creates different random weights
    std::cout << "\n=== Creating another layer with same size ===\n";
    Layer layer3(2, 3);
    layer3.print_info();
    std::cout << "(Notice the weights are different from layer1)\n";

    return 0;
}
