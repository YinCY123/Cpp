#include <iostream>

int main()
{
	int sum = 0;
	int v1;
	int v2;

	std::cout << "Please enter two distinct numbers: ";
	std::cin >> v1 >> v2;

	if( v1 == v2 ){
		std::cout << "please enter two distinct numbers:!";
		return 0;
	}

	if(v1 > v2){
		for(int val = v2; val <= v1; ++val){
			sum += val;
		}
	}

	if(v1 < v2){
		for(int val = v1; val <= v2; ++val){
			sum += val;
		}
	}

	std::cout << "The sum of between "
		<< v1 
		<< " and "
		<< v2 
		<< " is "
		<< sum
		<< std::endl;

	return 0;
}
