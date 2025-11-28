#include <iostream>

using namespace std;

// Function to display a 3x3 matrix
void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to transpose a 3x3 matrix
void transposeMatrix(int matrix[3][3], int transposed[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    
    int transposed[3][3];
    
    cout << "Original Matrix:" << endl;
    displayMatrix(matrix);
    
    transposeMatrix(matrix, transposed);
    
    cout << "Transposed Matrix:" << endl;
    displayMatrix(transposed);
    
    return 0;
}
