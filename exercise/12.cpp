#include <iostream>

int main()
{
	double a;
	double b;
	char op;

	std::cout << "Enter the first number: ";
	std::cin >> a;
	
	std::cout << "Enter operator (+,-,*,/): ";
	std::cin >> op;
	
	std::cout << "Enter the second number: ";
	std::cin >> b;

	switch (op) {
	case '+':
		std::cout << a << " + " << b << " = " << a + b << '\n';
		break;
	case '-':
		std::cout << a << " - " << b << " = " << a - b << '\n';
		break;
	case '*':
		std::cout << a << " * " << b << " = " << a * b << '\n';
		break;
	case '/':
		if (b != 0){
			std::cout << a << " / " << b << " = " << a / b << '\n';
			break;
		}else{
			std::cout << "Error! Division by zero is not allowed!" << '\n';
			return 1;
		}
		break;
	default:
		std::cout << "the operator you entered is not valid!";
		break;
	}
	return 0;
}
