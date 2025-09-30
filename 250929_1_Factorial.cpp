/*
Date: 29 September 2025
Time: 1M 56S
Desc: Membuat program menghitung n faktorial hanya di main
*/

#include <iostream>
using namespace std;

int main(){
    int n, hasil = 1;
    cout << "Masukkan bilangan n: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        hasil *= i;
    }

    cout << "Hasil dari " << n << "! adalah " << hasil;
}