#include <iostream>

using namespace std;

class Matrix {
    private:
        int **arr;   
        int rows, cols;

    public:
       
        Matrix() {
            rows = 0;
            cols = 0;
            arr = NULL;
        }

       
        Matrix(int r, int c) {
            rows = r;
            cols = c;
            arr = new int*[rows];
            for (int i = 0; i < rows; i++) {
                arr[i] = new int[cols];
            }
        }

       
        void input() {
            cout << "Enter matrix elements:" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cin >> arr[i][j];
                }
            }
        }

        
        void display() {
            cout << "Matrix:" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }

       
        Matrix multiply(Matrix m) {
            Matrix temp(rows, m.cols);   
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

    Matrix m1(r1, c1);   
    Matrix m2(r2, c2);   
    Matrix m3;           

    m1.input();   
    m2.input();   

    m3 = m1.multiply(m2);  

    m1.display();   
    m2.display();   
    m3.display();   

    return 0;
}
