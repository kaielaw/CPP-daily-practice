/*
Nama Program : soal4
Nama         : Kayla Hessa Ferdinan
NPM          : 140810250023
Tanggal Buat : 3 Oktober 2025
Deskripsi    : soal 4 quiz 1
*/

#include <iostream>
using namespace std;

void frontPage(){
    cout << "========= AVIARY =========\n";
    cout << "1. Kopi Hitam\t(Rp 10.000)\n";
    cout << "2. Kopi Susu\t(Rp 12.000)\n";
    cout << "3. Selesai & Bayar\n";
    cout << "==========================\n";
}

void order(int total){
    int input, paid;
    
    do{
        cin >> input;
    } while (input < 1 || input > 3);
    
    switch (input)
    {
    case 1:
        total += 10000;
        order(total);
        break;
    
    case 2:
        total += 12000;
        order(total);
        break;
    
    case 3:
        cin >> paid;
        cout << "Total belanja Anda: Rp " << total << ".\n";
        cout << "Terima kasih! Kembalian Anda: Rp " << paid-total << ".\n";
        break;
        
    default:
        system("cls");
        break;
    }
}

int main(){
    frontPage();
    order(0);
    
    return 0;
}