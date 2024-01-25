#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declare and initialize a 3x3 matrix
    vector<vector<int>> matrix(3, vector<int>(3));

    // Input matrix elements
    cout << "Enter the matrix (3x3):" << endl;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Display the original matrix
    cout<<endl;
    reverse(matrix.begin(), matrix.end());
    cout<<"Reverse matrix"<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i<3; i++){
        for(int j = i; j<3; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
        cout<<endl;
    }
    cout<<"Transpose matrix"<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
