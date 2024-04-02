
#include <iostream>

const int MAX_SIZE = 100;

// Fungsi untuk memasukkan nilai array 2 dimensi
void inputArray(int arr[][MAX_SIZE], int rows, int cols) {
    std::cout << "Masukkan nilai array 2 dimensi:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Masukkan nilai untuk baris " << i + 1 << " dan kolom " << j + 1 << ": ";
            std::cin >> arr[i][j];
        }
    }
}
                    
// Fungsi untuk mencetak array 2 dimensi
void printArray(int arr[][MAX_SIZE], int rows, int cols) {
    std::cout << "\nArray 2 dimensi:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << '\n';
    }
}

// Fungsi untuk membuat array 1 dimensi dan mencetaknya
void printEvenColumnSum(int arr[][MAX_SIZE], int rows, int cols) {
    int evenColumnSum[MAX_SIZE] = {0};

    // Menghitung jumlah nilai genap dari tiap kolom
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            if (arr[i][j] % 2 == 0) {
                evenColumnSum[j] += arr[i][j];
            }
        }
    }

    // Mencetak array 1 dimensi
    std::cout << "\nJumlah nilai genap dari tiap kolom:\n";
    for (int j = 0; j < cols; ++j) {
        std::cout << evenColumnSum[j] << "\t";
    }
}

int main() {
    int rows, cols;

    // Input ukuran array 2 dimensi
    std::cout << "Masukkan jumlah baris array: ";
    std::cin >> rows;
    std::cout << "Masukkan jumlah kolom array: ";
    std::cin >> cols;

    // Deklarasi array 2 dimensi
    int myArray[MAX_SIZE][MAX_SIZE];

    // Memanggil fungsi untuk memasukkan nilai array 2 dimensi
    inputArray(myArray, rows, cols);

    // Memanggil fungsi untuk mencetak array 2 dimensi
    printArray(myArray, rows, cols);

    // Memanggil fungsi untuk membuat dan mencetak array 1 dimensi
    printEvenColumnSum(myArray, rows, cols);

    return 0;
}



