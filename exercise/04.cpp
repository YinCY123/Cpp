#include <iostream>

int main()
{
	char c = 'C';
	int a = 60;
	float f = 15.5;
	double d = 25.555;

	std::cout << "size of char: " << sizeof(c) << " byte(s)" << '\n';
	std::cout << "size of int: " << sizeof(a) << " byte(s)" << '\n';
	std::cout << "size of float: " << sizeof(f) << " byte(s)" << '\n';
	std::cout << "size of double: " << sizeof(d) << " byte(s)" << '\n';

	return 0;
}
