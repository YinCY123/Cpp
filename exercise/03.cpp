#include <iostream>

int main()
{
	double x;
        double y;
	double z;
	std::cout << "please enter three numbers: ";
	std::cin >> x >> y >> z;
	std::cout << "double num1 = " << x << ", num2 = " << y << ", num3 = " << x << '\n';
	
	//avg=(x+y+z)/3

	std::cout << "the average of the three numbers is: " << (x+y+z)/3 << '\n';

	return 0;
}
