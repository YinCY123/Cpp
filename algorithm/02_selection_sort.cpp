#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

def findMin(vector<int> vec)
{
    int min = vec[0]; 
    int index = 0;
    
    for( int i : vec){
        if(min < vec[i]){
            min = vec[i];
            index = i;
        }
    }
    return index;
}

def selectionSort(vector<int> arr){
    vector<int> newVec;
    for(auto i : arr){
        minIndex = findMin(arr);
        newVec.push_back(arr.pop_back(minIndex));
    }

    return newVec;
}

int main(vector<int> arr)
{
    selectionSort(arr)
    return 0;
}
