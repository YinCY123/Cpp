#include <iostream>

int main()
{
	int A = 10;
	int B = 20;

	std::cout << "Before swap: A = " << A << ", B = " << B << '\n';

	//int X;
	//X = A; 
	//A = B; 
	//B = X;

	A = A + B;
	B = A - B; 
	A = A - B;

	std::cout << "After swap: A = " << A << ", B = " << B << '\n';

	return 0;
}
