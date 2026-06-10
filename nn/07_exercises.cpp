#include <iostream>
#include <vector>

// ============================================================
// LESSON 7 EXERCISES: References and Parameter Passing
// Fill in each function where you see "TODO".
// Compile and run to check your answers against the expected output
// shown at the bottom of this file.
// ============================================================


// ----- Exercise 1 -----
// Write a function that DOUBLES every element of the vector IN PLACE.
// Hint: you must modify the original, so think about which way to pass it.
// Signature is given; complete the body.
void double_all(std::vector<double>& v) {
    // TODO: multiply each element by 2
    for( int i=0; i < v.size(); i++){
        v[i] = v[i] * 2;
        std::cout << v[i] << " ";
    }
}


// ----- Exercise 2 -----
// Write a function that returns the AVERAGE (mean) of a vector,
// WITHOUT copying it (it only reads the data).
// TODO: choose the correct parameter type, then complete the body.
double average(const std::vector<double>& v) {
    // TODO: compute and return the mean
    double sum {0.0};
    double avg;
    for(double i : v){
        sum += i;
    }
    avg = sum / v.size();
    return avg;  // replace this
}


// ----- Exercise 3 -----
// Write a function that finds the LARGEST value in a vector.
// It should not modify or copy the vector.
// TODO: write the full signature AND body yourself.
//       Name it max_value, it takes a vector<double>, returns a double.

double max_value(std::vector<double>& v)
{
    double m;
    m = v[0];
    for(int i=0; i < v.size(); i++){
        if(m < v[i]){
            m = v[i];
        }
    }
    return m;
}


// ----- Exercise 4 (reference as alias) -----
// In main below, there's a vector `scores`. Using a REFERENCE,
// create an alias to scores[2] called `third`, then add 10 to the
// score through the alias. Do NOT write scores[2] again after creating
// the alias.


int main() {
    // --- Test Exercise 1 ---
    std::vector<double> nums = {1.0, 2.0, 3.0};
    double_all(nums);
    std::cout << "Ex1 doubled: ";
    for (double x : nums) std::cout << x << " ";
    std::cout << "\n";

    // --- Test Exercise 2 ---
    std::vector<double> data = {2.0, 4.0, 6.0, 8.0};
    std::cout << "Ex2 average: " << average(data) << "\n";  // uncomment when ready

    // --- Test Exercise 3 ---
    std::cout << "Ex3 max: " << max_value(data) << "\n";   // uncomment when ready

    // --- Test Exercise 4 ---
    std::vector<double> scores = {50.0, 60.0, 70.0};
    // TODO: create a reference alias to scores[2] and add 10 through it
    double& third = scores[2];
    third += 10;
    std::cout << "Ex4 scores[2]: " << scores[2] << "\n";

    return 0;
}

/*
EXPECTED OUTPUT once all exercises are done:

Ex1 doubled: 2 4 6
Ex2 average: 5
Ex3 max: 8
Ex4 scores[2]: 80
*/
