#include <iostream>

int main()
{
	char ch;
	std::cout << "enter a single character: ";
	std::cin >> ch;

	int asciiValue = (int)ch;

	std::cout << "The ASCCII value of " << ch << " is: " << asciiValue << '\n';

	return 0;
}
