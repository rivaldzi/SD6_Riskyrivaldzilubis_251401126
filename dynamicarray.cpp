#include <iostream>
using namespace std;
int main () {
    system ("cls");
    int n;

    cout << "Masukkan jumlah data : ";
    cin >> n;
    
    int* arr = new int[n];

    cout <<"imputasi data\n";

    for (int i = 0; i < n; i++){
        cout << "data ke-" << i+1 << " : ";
        cin >> arr[i];
    } 

    cout << "output data\n";
    for (int i = 0; i < n; i++) {
        cout << "output data ke-" << i + 1 << " : ";
        cout << arr [i] << endl;

        
    }

    delete[] arr;
    return 0;
    
}    