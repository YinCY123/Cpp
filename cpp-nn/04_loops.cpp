#include <iostream>
#include <cmath>

int main() {
    // ============================================================
    // PART 1: if / else  -- making decisions
    // ============================================================
    double prediction = 0.73;  // imagine our network output this
    double threshold = 0.5;

    std::cout << "=== Classification decision ===\n";
    if (prediction > threshold) {
        std::cout << "Prediction " << prediction << " -> class 1 (positive)\n";
    } else {
        std::cout << "Prediction " << prediction << " -> class 0 (negative)\n";
    }

    // Comparison operators: >  <  >=  <=  ==  !=
    // (note: == is "equal to", a single = is assignment!)

    // ============================================================
    // PART 2: for loop -- repeat a fixed number of times
    // This is how we run training "epochs".
    // ============================================================
    std::cout << "\n=== Simulated training (for loop) ===\n";
    double weight = 2.0;          // start with a bad weight
    double target = 0.0;          // we want weight to reach 0
    double learning_rate = 0.3;

    // for (start; keep-going condition; step-after-each-iteration)
    for (int epoch = 1; epoch <= 5; epoch++) {
        // gradient descent step: nudge weight toward target
        double error = weight - target;
        weight = weight - learning_rate * error;
        std::cout << "Epoch " << epoch << ": weight = " << weight << "\n";
    }

    // ============================================================
    // PART 3: while loop -- repeat until a condition is met
    // "Keep training until the error is small enough."
    // ============================================================
    std::cout << "\n=== Train until converged (while loop) ===\n";
    double w = 5.0;
    int steps = 0;
    while (std::abs(w) > 0.01) {     // std::abs = absolute value
        w = w - 0.5 * w;             // shrink w each step
        steps++;
    }
    std::cout << "Converged to w = " << w << " after " << steps << " steps\n";

    return 0;
}
