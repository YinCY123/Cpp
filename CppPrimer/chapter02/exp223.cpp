#include <iostream>

int main()
{
	int *p;
	
	if(p)
		std::cout 
			<< "\np is: " 
			<< p
			<< std::endl;

	if(*p)
		std::cout
			<< "\n*p is: "
			<< *p
			<< std::endl;

	return 0;
}
