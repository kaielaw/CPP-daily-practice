/*
Date: 29 September 2025
Time: 2M 18S
Desc: Membuat program menghitung n faktorial di function
*/

#include <iostream>
using namespace std;

int factorial(int n){
    int hasil = 1;

    for (int i = 1; i <= n; i++){
        hasil *= i;
    }
    
    return hasil;
}

int main(){
    int n;
    cout << "Masukkan angka n: ";
    cin >> n;

    cout << "Hasil dari " << n << "! adalah " << factorial(n);

    return 0;
}