#include <iostream>

int main()
{
	int i = 42;
	int *p = &i;
	*p = *p * *p;

	std::cout 
		<< "The value of p is: "
		<< p 
		<< "\nThe value of *p is: "
		<< *p 
		<< std::endl;

	return 0;
}
