#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<vector<int>> A(2, vector<int>(2));
    cout << "Enter elements for Matrix A (2 x 2): " << endl;
    for(auto i = 0; i != 2; ++i){
        for(auto j = 0; j != 2; ++j){
            cin >> A[i][j];
            cout << "A[" << i << "][" << j << "]: " << A[i][j] << endl;
        }
    }
    
    cout << "Enter elements for Matrix  B (2x2): " << endl;
    vector<vector<int>> B(2, vector<int>(2));
    for(auto i = 0; i != 2; ++i){
        for(auto j = 0; j != 2; ++j){
            cin >> B[i][j];
            cout << "B[" << i << "][" << j << "]: " << B[i][j] << endl;
        }
    }


    size_t nrow = A.size();
    size_t ncol = A.empty() ? 0 : A[0].size();
    vector<vector<int>> C(nrow, vector<int>(ncol));

    cout << "Resulting Matrix C (A + B): " << endl;
    for(auto i = 0; i != nrow; ++i){
        for(auto j = 0; j != ncol; ++j){
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}
