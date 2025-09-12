#include <iostream>
using namespace std;

int main(){
	int n;
	int sum = 0;
	cout << "请输入一个整数： ";
	cin >> n;

	for ( int i; i <= n; i++ ){
		sum += i;
	}

	cout << "1 到 " << n << " 的总和为：" << sum << endl;
	return 0;
}
