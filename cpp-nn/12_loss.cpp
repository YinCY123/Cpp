#include <iostream>
#include <vector>
#include <cmath>

using Vector = std::vector<double>;

// ============================================================
// LOSS FUNCTIONS
//
// A loss function measures "how wrong" the network's prediction is.
// During training, we try to MINIMIZE the loss.
// ============================================================

// Mean Squared Error (MSE) - most common for regression
// loss = (1/n) * sum((predicted - target)^2)
//
// For a single prediction:
// loss = (predicted - target)^2
double mse_loss(double predicted, double target) {
    double error = predicted - target;
    return error * error;
}

// MSE for a vector of predictions (multiple outputs)
double mse_loss_vector(const Vector& predicted, const Vector& target) {
    double total = 0.0;
    for (int i = 0; i < predicted.size(); i++) {
        double error = predicted[i] - target[i];
        total += error * error;
    }
    return total / predicted.size();  // mean
}

// Binary Cross-Entropy (BCE) - common for binary classification
// loss = -[target * log(predicted) + (1-target) * log(1-predicted)]
//
// Why this weird formula? It heavily penalizes confident wrong predictions.
// If target=1 and predicted=0.01 (very wrong), loss is huge.
// If target=1 and predicted=0.99 (correct), loss is tiny.
double bce_loss(double predicted, double target) {
    // Clamp predicted to [epsilon, 1-epsilon] to avoid log(0)
    const double epsilon = 1e-7;
    predicted = std::max(epsilon, std::min(1.0 - epsilon, predicted));

    return -(target * std::log(predicted) + (1.0 - target) * std::log(1.0 - predicted));
}

// ============================================================
// LOSS DERIVATIVES (needed for backpropagation)
// ============================================================

// Derivative of MSE with respect to the prediction:
// d(loss)/d(predicted) = 2 * (predicted - target)
double mse_derivative(double predicted, double target) {
    return 2.0 * (predicted - target);
}

// Derivative of BCE:
// d(loss)/d(predicted) = -target/predicted + (1-target)/(1-predicted)
// Simplified: (predicted - target) / [predicted * (1 - predicted)]
double bce_derivative(double predicted, double target) {
    const double epsilon = 1e-7;
    predicted = std::max(epsilon, std::min(1.0 - epsilon, predicted));

    return (predicted - target) / (predicted * (1.0 - predicted));
}

void print_comparison(const std::string& name, double predicted, double target) {
    std::cout << name << ":\n";
    std::cout << "  predicted: " << predicted << ", target: " << target << "\n";
    std::cout << "  MSE loss: " << mse_loss(predicted, target) << "\n";
    std::cout << "  BCE loss: " << bce_loss(predicted, target) << "\n";
    std::cout << "  MSE derivative: " << mse_derivative(predicted, target) << "\n";
    std::cout << "  BCE derivative: " << bce_derivative(predicted, target) << "\n\n";
}

int main() {
    std::cout << "=== Understanding Loss Functions ===\n\n";

    // Case 1: Perfect prediction
    print_comparison("Perfect (target=1, predicted=1)", 1.0, 1.0);

    // Case 2: Slightly wrong
    print_comparison("Slightly wrong (target=1, predicted=0.8)", 0.8, 1.0);

    // Case 3: Very wrong
    print_comparison("Very wrong (target=1, predicted=0.1)", 0.1, 1.0);

    // Case 4: Opposite (target=0, predicted=1)
    print_comparison("Opposite (target=0, predicted=1)", 1.0, 0.0);

    std::cout << "=== Key takeaways ===\n";
    std::cout << "1. Loss is HIGHER when prediction is further from target\n";
    std::cout << "2. Derivative tells us the DIRECTION to adjust:\n";
    std::cout << "   - Positive derivative → predicted is TOO HIGH, decrease it\n";
    std::cout << "   - Negative derivative → predicted is TOO LOW, increase it\n";
    std::cout << "3. We'll use MSE for XOR (simple, works well for this problem)\n";

    // XOR example
    std::cout << "\n=== XOR Example ===\n";
    Vector predicted = {0.565};  // what we got in Lesson 11
    Vector target = {0.0};       // what XOR(0,0) should be

    std::cout << "Input: [0, 0], Target: 0, Network output: " << predicted[0] << "\n";
    std::cout << "MSE loss: " << mse_loss_vector(predicted, target) << "\n";
    std::cout << "This tells us we're wrong by ~0.32 squared units.\n";
    std::cout << "Training will reduce this to near zero.\n";

    return 0;
}
