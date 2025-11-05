/*
Nama Program : tugas_2 // Jarak Titik Koordinat
Tanggal Buat : 4 November 2025
Deskripsi    : Hamud sedang kesulitan saat membuat program untuk menghitung jarak antara dua titik koordinat dengan bantuan struct dan pointer.
               Diberikan kedua titik a dan b, lalu Hamud diminta untuk menghitung jarak antara kedua titik tersebut.
               Bantulah Hamud untuk menyelesaikan permasalahan tersebut!
               Catatan: Wajib mengimplementasikan materi struct yang sudah diajarkan.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Koordinat{
    int x;
    int y;
};

void jarak (Koordinat *ptr_a, Koordinat *ptr_b){
    float deltaX = (float) (ptr_b->x - ptr_a->x);
    float deltaY = (float) (ptr_b->y - ptr_a->y);
    float hasil = sqrt(pow(deltaX, 2) + pow(deltaY, 2));

    cout << fixed << setprecision(2) << hasil;
}

int main(){
    Koordinat a;
    Koordinat b;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;

    jarak(&a, &b);

    return 0;
}