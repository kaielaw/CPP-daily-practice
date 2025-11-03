/*
Nama Program : soal2
Nama         : Kayla Hessa Ferdinan
NPM          : 140810250023
Tanggal Buat : 3 Oktober 2025
Deskripsi    : soal 2 quiz 1
*/

#include <iostream>
using namespace std;

int main(){
    int n, num, count, total = 0;
    cin >> n;
    int check = n;

    while (n > 0){
        num = n%10;
        count = num * num * num;
        total += count;
        n /= 10;
    }

    if (total == check){
        cout << check << " adalah Armstrong Number";
    } else{
        cout << check << " bukan Armstrong Number";
    }

    return 0;
}