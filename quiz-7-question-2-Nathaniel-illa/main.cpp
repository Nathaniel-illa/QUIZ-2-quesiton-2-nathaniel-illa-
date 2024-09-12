#include <iostream>
#include "main.hpp"

using namespace std;

void getRow(int numbers[], int rows, int cols, int row, int result[]) {
    if (row >= rows) {
        cerr << "Row index out of bounds" << endl;
        return;
    }
    for (int col = 0; col < cols; ++col) {
        result[col] = numbers[row * cols + col];
    }
}

void getCol(int numbers[], int rows, int cols, int col, int result[]) {
    if (col >= cols) {
        cerr << "Column index out of bounds" << endl;
        return;
    }
    for (int row = 0; row < rows; ++row) {
        result[row] = numbers[row * cols + col];
    }
}

int main() {
    // Test case 1
    int numbers[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int rows = 3;
    int cols = 3;
    int result[MAX];
    
    cout << "Row 2: ";
    getRow(numbers, rows, cols, 2, result);
    for (int i = 0; i < cols; i++)
        cout << result[i] << "\t";
    cout << endl;
    
    cout << "Column 1: ";
    getCol(numbers, rows, cols, 1, result);
    for (int i = 0; i < rows; i++)
        cout << result[i] << "\t";
    cout << endl;

    // Test case 2
    int numbers2[MAX] = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 16, 17, 18, 19, 20, 11, 12, 13, 14, 15};
    rows = 4;
    cols = 5;
    
    cout << "Row 3: ";
    getRow(numbers2, rows, cols, 3, result);
    for (int i = 0; i < cols; i++)
        cout << result[i] << "\t";
    cout << endl;

    cout << "Column 4: ";
    getCol(numbers2, rows, cols, 4, result);
    for (int i = 0; i < rows; i++)
        cout << result[i] << "\t";
    cout << endl;

    return 0;
}