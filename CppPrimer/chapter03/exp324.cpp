#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> grade{34,56,52,78,92,97,100,77,76};
    vector<int> cluster(11,0);
    for(auto it = grade.begin(); it != grade.end(); ++it){
        ++cluster[(*it)/10];
    }

    for(auto t = cluster.begin(); t != cluster.end(); ++t){
        cout << *t << " ";
    }
    cout << endl;

    return 0;
}
