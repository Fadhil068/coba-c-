#include <iostream>
using namespace std;

// Fungsi untuk memasukkan nilai array 2 dimensi dengan pengecekan genap/ganjil
void inputArray(int** array, int rows, int cols) {
    cout << "Masukkan nilai untuk array 2 dimensi:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Masukkan nilai untuk baris " << i+1 << ", kolom " << j+1 << ": ";
            cin >> array[i][j];

            // Pengecekan genap atau ganjil
            if (array[i][j] % 2 == 0) {
                cout << "Nilai genap.\n";
            } else {
                cout << "Nilai ganjil.\n";
            }
        }
    }
}

// Fungsi untuk mencetak array 2 dimensi
void printArray(int** array, int rows, int cols) {
    cout << "Array 2 Dimensi:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menghitung jumlah nilai genap dari tiap kolom
int* evenColumnSum(int** array, int rows, int cols) {
    int* evenSumArray = new int[cols]();  // Inisialisasi array 1 dimensi dengan nilai awal 0

    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            if (array[i][j] % 2 == 0) {
                evenSumArray[j] += array[i][j];
            }
        }
    }

    return evenSumArray;
}

// Fungsi untuk mencetak array 1 dimensi
void printEvenColumnSum(int* evenSumArray, int cols) {
    cout << "Jumlah Nilai Genap dari Tiap Kolom:\n";
    for (int j = 0; j < cols; ++j) {
        cout << evenSumArray[j] << " ";
    }
    cout << endl;
}

int main() {
    int rows, cols;

    // Meminta input ukuran array dari user
    cout << "Masukkan jumlah baris: ";
    cin >> rows;
    cout << "Masukkan jumlah kolom: ";
    cin >> cols;

    // Alokasi memori untuk array 2 dimensi
    int** array_2d = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array_2d[i] = new int[cols];
    }

    // Memanggil fungsi untuk memasukkan nilai array 2 dimensi
    inputArray(array_2d, rows, cols);

    // Memanggil fungsi untuk mencetak array 2 dimensi
    printArray(array_2d, rows, cols);

    // Memanggil fungsi untuk menghitung jumlah nilai genap dari tiap kolom
    int* evenSumArray = evenColumnSum(array_2d, rows, cols);

    // Memanggil fungsi untuk mencetak array 1 dimensi
    printEvenColumnSum(evenSumArray, cols);

    // Mendealokasi memori array 2 dimensi dan 1 dimensi
    for (int i = 0; i < rows; ++i) {
        delete[] array_2d[i];
    }
    delete[] array_2d;
    delete[] evenSumArray;

 b����return�0;
}

