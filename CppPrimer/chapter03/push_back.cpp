#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<int> v2;
	for (int i = 0; i != 100; ++i){
		v2.push_back(i);
	}
	
	for(decltype(v2.size()) i = 0; i < v2.size(); ++i ){
		cout << v2[i] << " ";
	}
	cout << endl;

	return 0;
}
