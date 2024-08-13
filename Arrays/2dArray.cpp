#include<iostream>
using namespace std;

void print(int arr[][3], int m, int n) {  // Fixed number of columns
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m = 3, n = 3;
    int arr[3][3] = {  // Must use constant dimensions here
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    print(arr, m, n);  // Pass the array along with dimensions
    return 0;
}
