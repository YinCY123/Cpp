#include <iostream>
#include <vector>
#include <cmath>
#include <random>

using Vector = std::vector<double>;
using Matrix = std::vector<std::vector<double>>;

double sigmoid(double z) {
    return 1.0 / (1.0 + std::exp(-z));
}

// Derivative of sigmoid, given the ALREADY-COMPUTED output a = sigmoid(z).
// Handy identity: sigmoid'(z) = a * (1 - a)
double sigmoid_deriv_from_output(double a) {
    return a * (1.0 - a);
}

// ============================================================
// BACKPROPAGATION
//
// Goal: figure out how much each weight contributed to the error,
// so we know how to adjust it. We use the CHAIN RULE from calculus.
//
// For one layer the forward pass is:
//   z = W * input + b
//   a = sigmoid(z)        (a is the output)
//
// During backprop we receive "d_output": how much the loss changes
// with respect to THIS layer's output (dLoss/da).
//
// We then compute three things:
//   1. d_z      = d_output * sigmoid'(z)          (gradient before activation)
//   2. d_weights = d_z * input                    (how to adjust each weight)
//   3. d_input  = W^T * d_z                        (gradient to pass to the
//                                                   PREVIOUS layer)
// ============================================================

class Layer {
public:
    int num_inputs;
    int num_outputs;
    Matrix weights;
    Vector biases;

    // Cached from forward pass
    Vector last_input;
    Vector last_output;

    // Gradients computed during backward pass
    Matrix grad_weights;   // same shape as weights
    Vector grad_biases;    // same shape as biases

    Layer(int inputs, int outputs) {
        num_inputs = inputs;
        num_outputs = outputs;

        std::random_device rd;
        std::mt19937 gen(rd());
        double limit = 1.0 / std::sqrt(inputs);
        std::uniform_real_distribution<> dist(-limit, limit);

        weights.resize(outputs);
        grad_weights.resize(outputs);
        for (int i = 0; i < outputs; i++) {
            weights[i].resize(inputs);
            grad_weights[i].resize(inputs, 0.0);
            for (int j = 0; j < inputs; j++) {
                weights[i][j] = dist(gen);
            }
        }
        biases.resize(outputs, 0.0);
        grad_biases.resize(outputs, 0.0);
        last_input.resize(inputs);
        last_output.resize(outputs);
    }

    Vector forward(const Vector& input) {
        last_input = input;
        for (int i = 0; i < num_outputs; i++) {
            double dot = 0.0;
            for (int j = 0; j < num_inputs; j++) {
                dot += weights[i][j] * input[j];
            }
            last_output[i] = sigmoid(dot + biases[i]);
        }
        return last_output;
    }

    // Backward pass. Receives d_output = dLoss/d(this layer's output).
    // Returns d_input = dLoss/d(this layer's input), to feed the previous layer.
    Vector backward(const Vector& d_output) {
        // Step 1: d_z = d_output * sigmoid'(z)
        // Using the identity sigmoid'(z) = output * (1 - output).
        Vector d_z(num_outputs);
        for (int i = 0; i < num_outputs; i++) {
            d_z[i] = d_output[i] * sigmoid_deriv_from_output(last_output[i]);
        }

        // Step 2: gradients for weights and biases.
        // grad_weights[i][j] = d_z[i] * input[j]
        // grad_biases[i]     = d_z[i]
        for (int i = 0; i < num_outputs; i++) {
            for (int j = 0; j < num_inputs; j++) {
                grad_weights[i][j] = d_z[i] * last_input[j];
            }
            grad_biases[i] = d_z[i];
        }

        // Step 3: d_input to pass back to the previous layer.
        // d_input[j] = sum over i of (W[i][j] * d_z[i])   (this is W^T * d_z)
        Vector d_input(num_inputs, 0.0);
        for (int j = 0; j < num_inputs; j++) {
            for (int i = 0; i < num_outputs; i++) {
                d_input[j] += weights[i][j] * d_z[i];
            }
        }
        return d_input;
    }

    // Apply the gradients: nudge weights opposite to the gradient.
    void update(double learning_rate) {
        for (int i = 0; i < num_outputs; i++) {
            for (int j = 0; j < num_inputs; j++) {
                weights[i][j] -= learning_rate * grad_weights[i][j];
            }
            biases[i] -= learning_rate * grad_biases[i];
        }
    }
};

int main() {
    std::cout << "=== Single backprop step on one layer ===\n\n";

    Layer layer(2, 1);   // 2 inputs, 1 output

    Vector input = {1.0, 0.0};
    double target = 1.0;

    // Forward
    Vector output = layer.forward(input);
    std::cout << "Forward output: " << output[0] << "\n";

    // Loss (MSE) and its derivative dLoss/d(output) = 2*(output - target)
    double loss = (output[0] - target) * (output[0] - target);
    std::cout << "Loss: " << loss << "\n";
    Vector d_output = { 2.0 * (output[0] - target) };
    std::cout << "dLoss/d(output): " << d_output[0] << "\n\n";

    // Backward
    Vector d_input = layer.backward(d_output);
    std::cout << "Computed gradients:\n";
    std::cout << "  grad_weights: [ " << layer.grad_weights[0][0]
              << ", " << layer.grad_weights[0][1] << " ]\n";
    std::cout << "  grad_bias:    " << layer.grad_biases[0] << "\n";
    std::cout << "  d_input (to previous layer): [ "
              << d_input[0] << ", " << d_input[1] << " ]\n\n";

    // Show one update step reduces the loss
    std::cout << "=== Applying one update (lr=0.5) ===\n";
    double before = layer.forward(input)[0];
    layer.update(0.5);
    double after = layer.forward(input)[0];
    std::cout << "Output before update: " << before << "\n";
    std::cout << "Output after update:  " << after << "\n";
    std::cout << "Target was: " << target << "\n";
    std::cout << "The output moved " << (after > before ? "UP" : "DOWN")
              << " toward the target. Backprop works!\n";

    return 0;
}
