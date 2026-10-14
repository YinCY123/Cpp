#include <iostream>

int main()
{
	std::cout << "please enter a sequence numbers: ";

	int sum = 0;
	int val;

	while(std::cin >> val){
		sum += val;
	}

	std::cout << "The sum of the entered numbers is: "
		<< sum
		<< std::endl;

	return 0;
}
