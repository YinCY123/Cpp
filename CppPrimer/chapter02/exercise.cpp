#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	Sales_data data1, data2;
	double price=0;
	
	// read in the first transaction
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	// read the second transaction
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	// sum of same isbn
	if( data1.bookNo == data2.bookNo ) {
	unsigned totalCnt = data1.units_sold + data2.units_sold;
	double totalRevenue = data1.revenue + data2.revenue;

	if (data1.bookNo == data2.bookNo){
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		std::cout << "\nThe ISBN is: " 
				  << data1.bookNo
				  << "\nTotal number of Books Sold: " 
				  << totalCnt
				  << "\nTotal Revenue: "
				  << totalRevenue 
				  << "￥\n==============================" 
				  << std::endl;
		if(totalCnt != 0){
			std::cout << "Mean price pre book: "
					  << totalRevenue/totalCnt 
					  << "￥\n"
					  << std::endl;
		}else{
			std::cout << "(no sales)" << std::endl;
		}
	}else{
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}
}
