#include <iostream>
#include <vector>

// ============================================================
// LESSON 7 EXERCISES -- SOLUTIONS
// ============================================================


// ----- Exercise 1 -----
// Double every element IN PLACE. We must modify the original,
// so we pass by REFERENCE (&) -- no const, because we change it.
void double_all(std::vector<double>& v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] = v[i] * 2.0;   // or:  v[i] *= 2.0;
    }
}


// ----- Exercise 2 -----
// Average without copying and without modifying -> const reference.
double average(const std::vector<double>& v) {
    double total = 0.0;
    for (double x : v) total += x;
    return total / v.size();
}


// ----- Exercise 3 -----
// Largest value. Read-only, no copy -> const reference.
double max_value(const std::vector<double>& v) {
    double best = v[0];                 // assume first is biggest to start
    for (double x : v) {
        if (x > best) best = x;         // update when we find something bigger
    }
    return best;
}


int main() {
    // --- Exercise 1 ---
    std::vector<double> nums = {1.0, 2.0, 3.0};
    double_all(nums);
    std::cout << "Ex1 doubled: ";
    for (double x : nums) std::cout << x << " ";
    std::cout << "\n";

    // --- Exercise 2 ---
    std::vector<double> data = {2.0, 4.0, 6.0, 8.0};
    std::cout << "Ex2 average: " << average(data) << "\n";

    // --- Exercise 3 ---
    std::cout << "Ex3 max: " << max_value(data) << "\n";

    // --- Exercise 4: reference as alias ---
    std::vector<double> scores = {50.0, 60.0, 70.0};
    double& third = scores[2];   // 'third' is now another name for scores[2]
    third += 10.0;               // changing the alias changes scores[2]
    std::cout << "Ex4 scores[2]: " << scores[2] << "\n";

    return 0;
}
