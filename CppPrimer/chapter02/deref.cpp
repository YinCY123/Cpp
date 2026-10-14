#include <iostream>

int main()
{
	int ival = 1024;
	int *p = &ival;
	int **ppi = &p;

	std::cout << "The value of ival\n"
		<< "direct value: "
		<< ival
		<< "\n"
		<< "indirect value: "
		<< *p
		<< "\n"
		<< "doubly indirect value: "
		<< **ppi
		<< std::endl;

	return 0;
}
