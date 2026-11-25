#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
	vector<int> numbers = {10, 10, 20, 30, 40, 100, 90, 80, 70, 60, 20, 30, 40, 50, 20, 10, 30, 40, 50, 80, 70};
	int target;
	cout << "enter the target: ";
	cin >> target;
	int count = 0;

	for(auto i = 0; i != numbers.size(); ++i){
		if(target == numbers[i]){
			++count;
		}
	}

	cout << "The number " 
	     << target 
	     << " occurs " 
	     << count  
	     << " times." 
	     << endl; 
	return 0;
}
