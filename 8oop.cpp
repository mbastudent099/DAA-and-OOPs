#include <iostream>
#include <iomanip>
using namespace std;

class MagicSquare {
    private:
        int n;
        int **square;
    public:
        MagicSquare(int n) {
            this->n = n;
            square = new int*[n];
            for (int i = 0; i < n; i++) {
                square[i] = new int[n];
            }
            generate();
        }

        ~MagicSquare() {
            for (int i = 0; i < n; i++) {
                delete[] square[i];
            }
            delete[] square;
        }

        void generate() {
            int row = n / 2;
            int col = n - 1;
            for (int num = 1; num <= n * n;) {
                if (row == -1 && col == n) {
                    col = n - 2;
                    row = 0;
                } else {
                    if (col == n) col = 0;
                    if (row < 0) row = n - 1;
                }
                if (square[row][col]) {
                    col -= 2;
                    row++;
                    continue;
                } else {
                    square[row][col] = num++;
                }
                col++;
                row--;
            }
        }

        void display() {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << setw(4) << square[i][j] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    int n;
    cout << "Enter the size of the magic square: ";
    cin >> n;
    MagicSquare ms(n);
    ms.display();
    return 0;
}