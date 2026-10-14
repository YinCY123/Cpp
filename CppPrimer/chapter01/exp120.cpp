#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "enter book sales transactions: ";
	Sales_item val;

	while (std::cin >> val){
		std::cout << val << std::endl;	
	}

	return 0;
}
