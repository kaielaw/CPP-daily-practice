/*
Nama Program : tugas_1 // Pembalik Array
Tanggal Buat : 4 November 2025
Deskripsi    : Kayla sedang kebingungan saat mengerjakan suatu permasalahan yang diberikan oleh aspracknya.
               Permasalahan tersebut adalah membuat program untuk membalik urutan elemen pada sebuah array dengan bantuan pointer.
               Bantulah Kayla untuk menyelesaikan permasalahan tersebut!
*/

#include <iostream>
using namespace std;

void inputData (int size, int arr[]){
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void swapArr (int size, int arr[]){
    int *left, *right;
    left = &arr[0];
    right = &arr[size-1];

    while (left < right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

void outputData(int size, int arr[]){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];

    inputData(size, arr);
    swapArr(size, arr);
    outputData(size, arr);

    return 0;
}