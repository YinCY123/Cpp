#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    cout << "enter the number of element: ";
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; ++i){
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0];
    for(auto i : arr){
        if(i > max){
            max = i;
        }

        if(i < min){
            min = i;
        }
    }
    cout << "Maximum element is: " << max << endl;
    cout << "Minimum element is: " << min << endl;

    return 0;
}
