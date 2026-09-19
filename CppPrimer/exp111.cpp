#include <iostream>

int main()
{
	std::cout << "Please enter two numbers: ";
	int v1;
	int v2;

	int sum = 0; 
	int val;

	std::cin >> v1 >> v2;
	if(v1 == v2){
		std::cout << "Your should enter two distinct numbers!";
		return 0;
	}

	if(v1 > v2){
		val = v2;
		while (val <= v1){
			sum += val;
			++val;
		}
	}

	if(v1 < v2){
		val = v1;
		while (val <= v2){
			sum += val;
			++val;
		}
	}

	std::cout << "The sum of values between " 
		<< v1 
		<< " and "
	        << v2
       		<< " is "
 		<< sum
		<< std::endl;
	return 0;	
}
