#include <iostream>
#include <vector>
#include <cmath>
#include <random>

using Vector = std::vector<double>;
using Matrix = std::vector<std::vector<double>>;

double sigmoid(double z) {
    return 1.0 / (1.0 + std::exp(-z));
}

// ----- The Layer class (same as Lesson 10) -----
class Layer {
public:
    int num_inputs;
    int num_outputs;
    Matrix weights;
    Vector biases;
    Vector last_input;
    Vector last_z;
    Vector last_output;

    Layer(int inputs, int outputs) {
        num_inputs = inputs;
        num_outputs = outputs;

        std::random_device rd;
        std::mt19937 gen(rd());
        double limit = 1.0 / std::sqrt(inputs);
        std::uniform_real_distribution<> dist(-limit, limit);

        weights.resize(outputs);
        for (int i = 0; i < outputs; i++) {
            weights[i].resize(inputs);
            for (int j = 0; j < inputs; j++) {
                weights[i][j] = dist(gen);
            }
        }
        biases.resize(outputs, 0.0);
        last_input.resize(inputs);
        last_z.resize(outputs);
        last_output.resize(outputs);
    }

    Vector forward(const Vector& input) {
        last_input = input;
        for (int i = 0; i < num_outputs; i++) {
            double dot = 0.0;
            for (int j = 0; j < num_inputs; j++) {
                dot += weights[i][j] * input[j];
            }
            last_z[i] = dot + biases[i];
        }
        for (int i = 0; i < num_outputs; i++) {
            last_output[i] = sigmoid(last_z[i]);
        }
        return last_output;
    }
};

// ============================================================
// The NETWORK class: holds multiple layers and chains them.
// This is the full neural network structure.
// ============================================================
class Network {
public:
    // A vector of Layer objects. The network is just a stack of layers.
    std::vector<Layer> layers;

    // Add a layer to the network.
    void add_layer(int inputs, int outputs) {
        layers.push_back(Layer(inputs, outputs));
    }

    // Forward pass through ALL layers.
    // The output of each layer becomes the input to the next.
    Vector forward(const Vector& input) {
        Vector current = input;
        for (int i = 0; i < layers.size(); i++) {
            current = layers[i].forward(current);
        }
        return current;
    }

    void print_architecture() {
        std::cout << "Network architecture:\n";
        for (int i = 0; i < layers.size(); i++) {
            std::cout << "  Layer " << i << ": "
                      << layers[i].num_inputs << " -> "
                      << layers[i].num_outputs << "\n";
        }
    }
};

void print_vector(const std::string& name, const Vector& v) {
    std::cout << name << ": [ ";
    for (double x : v) std::cout << x << " ";
    std::cout << "]\n";
}

int main() {
    // Build a network for the XOR problem:
    //   2 inputs -> 4 hidden neurons -> 1 output
    Network net;
    net.add_layer(2, 4);   // input layer -> hidden layer
    net.add_layer(4, 1);   // hidden layer -> output layer

    net.print_architecture();
    std::cout << "\n";

    // The 4 possible XOR inputs
    std::vector<Vector> inputs = {
        {0.0, 0.0},
        {0.0, 1.0},
        {1.0, 0.0},
        {1.0, 1.0}
    };

    std::cout << "=== Forward pass (untrained network) ===\n";
    std::cout << "(Output is random because we haven't trained yet)\n\n";
    for (const Vector& in : inputs) {
        Vector out = net.forward(in);
        std::cout << "input [" << in[0] << ", " << in[1] << "]"
                  << " -> output " << out[0] << "\n";
    }

    std::cout << "\nXOR should produce: 0, 1, 1, 0\n";
    std::cout << "Right now it's basically random. Training (Lessons 12-14)\n";
    std::cout << "will teach the network to produce the correct values.\n";

    return 0;
}
