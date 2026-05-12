#include <iostream>

int main()
{
	int x;
	std::cout << "enter the first number: "; 
	std::cin >> x;
	
	int y;
	std::cout << "enter the second number: ";
	std::cin >> y;

	std::cout << "\nResults: " << '\n';
	std::cout << "Sum: " << x + y << '\n';
	std::cout << "Differencec: " << x - y << '\n';
	std::cout << "Product: " << x * y << '\n';
	std::cout << "Quotient (integer division):" << x / y << '\n';

	return 0;
}
