#include <iostream>

int main() {
    // === Types you'll use in neural networks ===

    // int: whole numbers - for counting epochs, layer sizes, etc.
    int epochs = 100;
    int num_neurons = 4;

    // double: decimal numbers with high precision - for weights, biases, loss
    // This is the type we'll use most in our neural network.
    double weight = 0.5;
    double bias = -0.3;
    double learning_rate = 0.01;

    // bool: true or false
    bool is_training = true;

    // --- Printing variables ---
    // You can chain multiple << to print text and variables together
    std::cout << "=== Neural Network Config ===" << "\n";
    std::cout << "Epochs: " << epochs << "\n";
    std::cout << "Neurons: " << num_neurons << "\n";
    std::cout << "Weight: " << weight << "\n";
    std::cout << "Bias: " << bias << "\n";
    std::cout << "Learning rate: " << learning_rate << "\n";
    std::cout << "Training mode: " << is_training << "\n";  // prints 1 (true) or 0 (false)

    // --- You can change a variable's value ---
    std::cout << "\n=== After one epoch ===" << "\n";
    weight = weight - learning_rate * 0.5;  // simulating a tiny weight update
    std::cout << "Updated weight: " << weight << "\n";

    // --- Basic arithmetic (the foundation of all neural net math) ---
    double input = 1.5;
    double output = input * weight + bias;  // This is literally what a single neuron does!
    std::cout << "\n=== Single neuron ===" << "\n";
    std::cout << "input * weight + bias = " << input << " * " << weight << " + " << bias << "\n";
    std::cout << "output = " << output << "\n";

    std::cout << "\n=== After two epoch ===" << "\n";
    weight = weight - learning_rate * 0.5;  // simulating a tiny weight update
    std::cout << "Updated weight: " << weight << "\n";
    
    output = output + output * weight + bias;
    std::cout << "\n=== Second neuron ===" << "\n";
    std::cout << "input + input * weight + bias = " << output << " + " << output << " * " << weight << " + " << bias << "\n";
    std::cout << "output  = " << output << "\n";

    return 0;
}
