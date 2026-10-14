#include <iostream>

int main()
{
	int sum = 0; 
	int val = 10;

	while (val > 0){
		sum += val;
		--val;
	}

	std::cout << "The sum of 1 to 10 is: " << sum << std::endl;

	return 0;
}
