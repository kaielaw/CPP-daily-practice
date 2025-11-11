/*
Date : 11 November 2025
Desc : Buatlah fungsi untuk:
       a. Mencari titik tengah (T) dari 2 buah koordinat A dan B.
          Diketahui rumus untuk titik tengah adalah:
          T.absis = (A.absis + B.absis) / 2
          T.ordinat = (A.ordinat + B.ordinat) / 2
          Berbentuk function dan void
       b. Mencari koordinat hasil pencerminan terhadap sumbu X dan terhadap sumbu Y
          Berbentuk function dan void
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Titik{
    float absis;
    float ordinat;
};

void inputData(Titik &A, Titik &B){
    cout << "Masukkan absis (x) dari titik A: ";
    cin >> A.absis;
    cout << "Masukkan ordinat (y) dari titik A: ";
    cin >> A.ordinat;
    cout << "Masukkan absis (x) dari titik B: ";
    cin >> B.absis;
    cout << "Masukkan ordinat (y) dari titik B: ";
    cin >> B.ordinat;    
}

void titikTengah(Titik A, Titik B, Titik &T){
    T.absis = (A.absis + B.absis)/2;
    T.ordinat = (A.ordinat + B.ordinat)/2;

    cout << fixed  << setprecision(2) << "Koordinat titik: ("<< T.absis << ", " << T.ordinat << ")\n";
}

void pencerminan(Titik T){
    cout << fixed  << setprecision(2) << "Koordinat hasil pencerminan terhadap sumbu X: (" << T.absis << ", " << -T.ordinat << ")\n";
    cout << fixed  << setprecision(2) << "Koordinat hasil pencerminan terhadap sumbu y: (" << -T.absis << ", " << T.ordinat << ")\n";
}

int main(){
    Titik A, B, T;
    inputData(A, B);
    titikTengah(A, B, T);
    pencerminan(T);

    return 0;
}