#include <stdio.h>

int main() {
    // Deklarasi array 2D dengan elemen yang diinginkan
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Menampilkan isi array sesuai format yang diminta
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]); // Menggunakan '\t' untuk memberikan jarak antar elemen
        }
        printf("\n"); // Pindah ke baris baru setiap setiap baris array
    }

    return 0;
}
