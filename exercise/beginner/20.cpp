#include <iostream>


int main()
{
	long long N = 4829;
	int n = 0;
	auto hold = N;
	while((N % 10) > 0){
		++n;
		N = N / 10;
	}

	std::cout << "The number of digits in " 
		  << hold 
		  << " is: " 
		  << n 
		  << std::endl;
	return 0;
}
