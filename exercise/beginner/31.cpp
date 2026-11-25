#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers = {1, 0, 5, 0, 8, 0, 2};
	std::cout << "Original array: ";
	for(auto i : numbers){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	
	for(auto& i : numbers){
		if(i == 0){
			i = -1;
		}
	}

	std::cout << "Modified array: ";
	for(auto i : numbers){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
