/*
Date : 1 November 2025
Desc : Pak Dengklek memiliki kandang bebek dengan panjang 364 cm dan lebar 79 cm. Berapakah luas dan kelilingnya?
       Bantulah Pak Dengklek dengan membuat sebuah program C++ yang menghasilkan keluaran berikut:
       - Baris pertama berisi luas kandang, dalam cm persegi.
       - Baris kedua berisi keliling kandang, dalam cm.
       Persisnya,
       - Luas kandang adalah hasil perkalian dari panjang dan lebar kandang.
       - Keliling kandang adalah dua kali dari hasil penjumlahan panjang dan lebar kandang.
*/

#include <iostream>

int main() {
    // cetak luas kandang
    std::cout << 364 * 79 << std::endl;

    // cetak keliling kandang
    std::cout << 2 * (364 + 79) << std::endl;

    return 0;
}