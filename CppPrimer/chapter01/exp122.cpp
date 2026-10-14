#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item val;
	Sales_item sum;

	while (std::cin >> val){
		sum += val;	
	}

	std::cout << "The sum of all the transction is: "
		<< sum 
		<< std::endl;

	return 0;
}

