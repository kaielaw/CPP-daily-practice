/*
Nama Program : latihan_2 // Shift Cipher
Tanggal Buat : 5 November 2025
Deskripsi    : Buatlah program untuk melakukan enkripsi shift cipher suatu file teks (dengan asumsi semua karakter huruf adalah huruf kapital)
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string s, f;
    int n;

    getline(cin, s);
    cin >> n;
    cin >> f;

    string arr[s.length()];
    for (int i = 0; i < s.length(); i++){
        int num = int((s[i] - 'A' + n)%26);
        s[i] = char(num + int('A'));
    }

    ifstream in_file;
    ofstream out_file;
    in_file.open(f);
    out_file.open(f);
    out_file << s << endl;
    string temp;
    in_file >> temp;
    cout << "Data : " << temp << endl;
    in_file.close();
    out_file.close();
    
    return 0;
}