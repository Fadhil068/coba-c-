#include<iostream>
using namespace std;

int main(){
	
	
	def input_array():
    # Meminta input dari pengguna untuk ukuran array
    baris = int(input("Masukkan jumlah baris: "))
    kolom = int(input("Masukkan jumlah kolom: "))

    # Inisialisasi array 2 dimensi dengan nilai 0
    array_2d = [[0 for j in range(kolom)] for i in range(baris)]

    # Meminta input untuk setiap elemen array dari pengguna
    for i in range(baris):
        for j in range(kolom):
            array_2d[i][j] = int(input(f"Masukkan nilai untuk baris {i+1}, kolom {j+1}: "))

    return array_2d

# Contoh penggunaan fungsi
array_input = input_array()
print("Array yang dihasilkan:")
for baris in array_input:
    print(baris)


	
	return 0;
}
