#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

void binarySearch(int data_array[], int len, int element)
{
    int low = 0;
    int high = len -1;

    while(low <= high){
        int mid = low + ((high - low)/2);
        if(element == data_array[mid]){
            cout << "Element "
                 << element
                 << " found at index "
                 << mid
                 << endl;
            return ;
        }else if(element < data_array[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout << "Element "
         << element
         << " not found in the array."
         << endl;
    return ;
}

int main()
{
    vector<int> data_array = {2,3,4,10,20,40};
    int length = data_array.size();
    binarySearch(data_array.data(), length, 2);
    binarySearch(data_array.data(), length, 3);
    binarySearch(data_array.data(), length, 10);
    binarySearch(data_array.data(), length, 100);

    return 0;
}
