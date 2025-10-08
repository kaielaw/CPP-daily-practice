/*
Date: 7 Oktober 2025
Time: 20M 9S
Desc: Operasi Matriks
Neo dari "The Matrix" perlu melakukan operasi dasar pada dua buah matriks berukuran 3x3.
Buatlah program yang dapat menerima input untuk dua matriks 3x3, lalu melakukan operasi penjumlahan dan pengurangan pada kedua matriks tersebut.

Format Input
18 buah angka integer. 9 angka pertama untuk Matriks A, dan 9 angka berikutnya untuk Matriks B. Angka dimasukkan baris per baris.

Format Output
Matriks A dan Matriks B yang diinput.
Matriks hasil penjumlahan (A + B).
Matriks hasil pengurangan (A - B).
*/

#include <iostream>
using namespace std;

typedef int Matriks[3][3];

void input(Matriks A){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    cout << endl;
}

void output(Matriks A){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << A[i][j];
            if (j < 2){
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void penjumlahan(Matriks A, Matriks B){
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << A[i][j] + B[i][j];
            if (j < 2){
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void pengurangan(Matriks A, Matriks B){
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << A[i][j] - B[i][j];
            if (j < 2){
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    Matriks A, B;
    input(A);
    input(B);
    
    cout << "Matriks A:" << endl;
    output(A);
    cout << "Matriks B:" << endl;
    output(B);
    cout << "Hasil Penjumlahan (A + B):" << endl;
    penjumlahan(A, B);
    cout << "Hasil Pengurangan (A - B):" << endl;
    pengurangan(A, B);
    
    return 0;
}