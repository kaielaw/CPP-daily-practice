/*
Nama Program : soal3
Nama         : Kayla Hessa Ferdinan
NPM          : 140810250023
Tanggal Buat : 3 Oktober 2025
Deskripsi    : soal 3 quiz 1
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int i = 0; i < n*5; i++){
        for (int j = 0; j < n*5; j++){
            if (i < n || (i >= n*2 && i < n*3)){
                cout << "A";
            } else if (i < n*2 || i >= n*3){
                if (j >= n && j < 4*n){
                    cout << " ";
                } else{
                    cout << "A";
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}