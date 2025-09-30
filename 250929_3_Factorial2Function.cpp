/*
Date: 29 September 2025
Time: 2M 24S
Desc: Membuat program menghitung n faktorial di 2 function
*/

#include <iostream>
using namespace std;

void input (int &n){ // pass by reference biar nilai di mainnya keubah juga
    cout << "Masukkan angka n: ";
    cin >> n;
}

int factorial (int n){
    int hasil = 1;

    for (int i = 1; i <= n; i++){
        hasil *= i;
    }

    return hasil;
}

int main(){
    int n;
    input(n);

    cout << "Hasil dari " << n << "! adalah " << factorial(n);

    return 0;
}