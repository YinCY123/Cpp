#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec(5);
    vector<int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--){
        ivec[ix] = cnt;
        cout << "cnt = "
             << cnt
             << '\n'
             << "ix = "
             << ix
             << "\n=========="
             << endl;
    }

    return 0;
}

