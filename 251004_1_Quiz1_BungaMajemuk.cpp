/*
Nama Program : soal1
Nama         : Kayla Hessa Ferdinan
NPM          : 140810250023
Tanggal Buat : 3 Oktober 2025
Deskripsi    : soal 1 quiz 1
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double P, n, t, r, hasil = 1;
    cin >> P >> r >> n >> t;

    int pangkat = n*t;
    double kurung = 1.0 + (r/n);

    for (int i = 0; i < pangkat; i++){
        hasil *= kurung;
    }

    long long A = P * hasil;

    cout << round(A);

    return 0;
}