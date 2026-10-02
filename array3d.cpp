#include <iostream>
using namespace std;

int main() {
    system ("cls");
    int m1[2][3][3];
    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;
        for(int j = 0; j < 3; j++) {
            cin >> m1[i][j][k];
        }
        cout<<"\n";
    }
    
     for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;
        for(int j = 0; j < 3; j++) {
            cout << m1[i][j][k] <<" ";
        }
        cout << "\n";

    }
}    