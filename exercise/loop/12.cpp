#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    long long n;
    cout << "enter a number: ";
    cin >> n;
    vector<int> arr;

    for(auto i = 1; i <= n; ++i){
        long long sum = 0; 
        int tmp = i;

        while(tmp > 0){
            int reminder = tmp % 10;
            sum += reminder * reminder * reminder;
            tmp /= 10;
        }

        if(i == sum){
            arr.push_back(i);
        }
    }

    cout << "The armstrong number between 1 and " << n << " is: ";
    for(auto i = 0; i != arr.size(); ++i){
        cout << arr[i] << (i == (arr.size() - 1) ? "" : " ");
    }
    cout << endl;

    return 0;
}

