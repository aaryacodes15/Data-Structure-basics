
#include<iostream>
using namespace std;

int main() {

    int matrix[3][3];   

    cout << "Enter elements of 3x3 matrix:\n";

    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix stored successfully.";

    return 0;
}