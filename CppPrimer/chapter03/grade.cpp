#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<unsigned> score(11, 0);
	unsigned grade;
	while (cin >> grade){
		if( grade <= 100 ){
			++score[grade/10];
		}
	}
	
	for(auto i : score){
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
