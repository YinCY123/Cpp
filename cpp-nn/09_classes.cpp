#include <iostream>
#include <vector>
#include <cmath>

using Vector = std::vector<double>;
using Matrix = std::vector<std::vector<double>>;

double sigmoid(double z) {
    return 1.0 / (1.0 + std::exp(-z));
}

// ============================================================
// A CLASS bundles data (member variables) and functions that
// operate on that data (member functions / methods) into one unit.
//
// This is the foundation of object-oriented programming.
// ============================================================

class Layer {
public:
    // --- Member variables (the data this layer holds) ---
    Matrix weights;
    Vector biases;
    int num_inputs;
    int num_outputs;

    // --- Constructor: runs when you create a Layer object ---
    // It initializes the member variables.
    Layer(int inputs, int outputs) {
        num_inputs = inputs;
        num_outputs = outputs;

        // Create a weights matrix: one row per output neuron,
        // one column per input. Initialize with small random-ish values.
        weights.resize(outputs); // output rows
        for (int i = 0; i < outputs; i++) {
            weights[i].resize(inputs); // input elements
            for (int j = 0; j < inputs; j++) {
                weights[i][j] = 0.1 * (i + j + 1);  // simple pattern for demo
            }
        }

        // Biases: one per output neuron, start at 0.
        biases.resize(outputs, 0.0);
    }

    // --- Member function (method): forward pass ---
    // Computes output = sigmoid(W * input + b).
    // "this->" refers to this object's member variables, but it's optional
    // (the compiler knows you mean this object's weights/biases).
    Vector forward(const Vector& input) {
        // Step 1: z = W * input
        Vector z(num_outputs, 0.0);
        for (int row = 0; row < num_outputs; row++) {
            double dot = 0.0;
            for (int col = 0; col < num_inputs; col++) {
                dot += weights[row][col] * input[col];
            }
            z[row] = dot;
        }

        // Step 2: z = z + bias
        for (int i = 0; i < num_outputs; i++) {
            z[i] += biases[i];
        }

        // Step 3: output = sigmoid(z)
        Vector output(num_outputs);
        for (int i = 0; i < num_outputs; i++) {
            output[i] = sigmoid(z[i]);
        }

        return output;
    }

    // --- Another method: print the layer's shape ---
    void print_info() {
        std::cout << "Layer: " << num_inputs << " inputs -> "
                  << num_outputs << " outputs\n";
    }
};

int main() {
    // Create a Layer object. The constructor runs automatically.
    Layer layer1(2, 3);   // 2 inputs, 3 outputs, setup a 2 -> 3 layer

    layer1.print_info();  // call a method with dot notation, print the shape of the layer

    Vector input = {1.0, 2.0};
    Vector output = layer1.forward(input);  // call the forward method

    std::cout << "Input:  [ ";
    for (double x : input) std::cout << x << " ";
    std::cout << "]\n";

    std::cout << "Output: [ ";
    for (double x : output) std::cout << x << " ";
    std::cout << "]\n";

    // You can create multiple independent Layer objects
    Layer layer2(3, 2);   // 3 inputs, 2 outputs, setup a 3 -> 2 layer
    layer2.print_info();

    // Chain them: output of layer1 becomes input to layer2
    Vector final_output = layer2.forward(output);
    std::cout << "After 2 layers: [ ";
    for (double x : final_output) std::cout << x << " ";
    std::cout << "]\n";

    return 0;
}
