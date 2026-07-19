#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], sub[3][3];
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter Matrix A:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> a[i][j];

    cout << "Enter Matrix B:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> b[i][j];
            
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            sub[i][j] = a[i][j] - b[i][j];

   cout << "Subtraction Result:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout << sub[i][j] << " ";
        cout << endl;
    }

    return 0;
}