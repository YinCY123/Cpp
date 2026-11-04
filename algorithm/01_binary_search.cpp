#include <iostream>
using namespace std;

void binarySearch(int data_array[], int len, int element)
{
    int low = 0;
    int high = len - 1;

    while(low <= high){
        int mid = (low + high)/2;
        if(element == data_array[mid]){
            cout << "Element found at index " << mid << endl;
            return ;
        }else if(element < data_array[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout << "Element not found in the array" << endl;

    return ;
}

int main()
{
    int data_array[] = {2,3,4,10,20,40};
    int length  = sizeof(data_array) / sizeof(int);
    binarySearch(data_array, length, 4);
    binarySearch(data_array, length, 3);
    binarySearch(data_array, length, 100);
    return 0;
}
