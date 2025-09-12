#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "请输入一个整数: ";
	cin >> num;

	if ( num % 2 == 0 ){
		cout << "这是一个偶数。" << endl;
	}else{
		cout << "这是一个奇数。" << endl;
	}
	return 0;
}
