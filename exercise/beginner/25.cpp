#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
	vector<int> vec = {10, 30, 40, 60, 20};
	int index = 0;
	int max = vec[index];

	for(auto i = 0; i != vec.size(); ++i){
		if(max < vec[i]){
			max = vec[i];
			index = i;
		}
	}

	cout << "The maxium element is: " 
	     << max
	     << " at "
	     << index + 1
	     << " element."
	     << endl;

	return 0;
}
