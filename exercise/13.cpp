#include <iostream>

int main()
{
    int score;
    std::cout << "Enter the student's score (0-100): ";
    std::cin >> score;
    if(score < 0 || score > 100){
        std::cout << "invalid score!" << '\n';
    }else if(score >= 90){
        std::cout << "Grade: A" << '\n';
    }else if(score >= 80){
        std::cout << "Grade: B" << '\n';
    }else if(score >= 70){
        std::cout << "Grade: C" << '\n';
    }else if(score >= 60){
        std::cout << "Grade: D" << '\n';
    }else{
        std::cout << "Grade: F" << '\n';
    }
    return 0;
}
