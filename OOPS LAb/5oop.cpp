#include <iostream>

using namespace std;

class Matrix {
    private:
        int **arr;   // Pointer to 2D array
        int rows, cols;

    public:
        // Default constructor
        Matrix() {
            rows = 0;
            cols = 0;
            arr = NULL;
        }

        // Constructor with two arguments (to initialize rows and columns of matrix)
        Matrix(int r, int c) {
            rows = r;
            cols = c;
            arr = new int*[rows];
            for (int i = 0; i < rows; i++) {
                arr[i] = new int[cols];
            }
        }

        // Function to take input of matrix elements from user
        void input() {
            cout << "Enter matrix elements:" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cin >> arr[i][j];
                }
            }
        }

        // Function to display matrix elements
        void display() {
            cout << "Matrix:" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }

        // Function to multiply two matrices
        Matrix multiply(Matrix m) {
            Matrix temp(rows, m.cols);   // Create new matrix to store result
            int sum;

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < m.cols; j++) {
                    sum = 0;
                    for (int k = 0; k < cols; k++) {
                        sum += arr[i][k] * m.arr[k][j];
                    }
                    temp.arr[i][j] = sum;
                }
            }

            return temp;
        }
};

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrices cannot be multiplied." << endl;
        return 0;
    }

    Matrix m1(r1, c1);   // Create matrix with entered rows and columns
    Matrix m2(r2, c2);   // Create matrix with entered rows and columns
    Matrix m3;           // Create empty matrix

    m1.input();   // Take input of matrix elements from user
    m2.input();   // Take input of matrix elements from user

    m3 = m1.multiply(m2);   // Multiply m1 and m2 and store result in m3

    m1.display();   // Display m1
    m2.display();   // Display m2
    m3.display();   // Display m3

    return 0;
}
