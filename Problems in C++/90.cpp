#include<iostream>
#include<vector>
using namespace std;

// Function to calculate the determinant of a matrix
int determinant(vector<vector<int>> &matrix, int n) {
    if (n == 1) {
        return matrix[0][0];
    }
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    int det = 0;
    vector<vector<int>> subMatrix(n, vector<int>(n));

    for (int x = 0; x < n; x++) {
        int sub_i = 0;
        for (int i = 1; i < n; i++) {
            int sub_j = 0;
            for (int j = 0; j < n; j++) {
                if (j == x)
                    continue;
                subMatrix[sub_i][sub_j] = matrix[i][j];
                sub_j++;
            }
            sub_i++;
        }
        det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinant(subMatrix, n - 1);
    }
    return det;
}

int main() {
    int n;
    cout << "Enter the order of the matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int det = determinant(matrix, n);
    cout << "The determinant of the matrix is: " << det << endl;

    return 0;
}
