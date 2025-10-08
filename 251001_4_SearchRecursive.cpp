/*
Date: 1 Oktober 2025
Time: 7M 15S
Desc: Search Recursive
Buatlah function yang bersifat rekursif searchRecursive(int data[], int n, int key) yang mengembalikan indeks pertama dari elemen key dalam array, atau -1 jika tidak ditemukan, menggunakan rekursi.

Input: data = [4, 2, 7, 8, 5], n = 5, key = 7  
Output: 2 (karena angka 7 berada di indeks ke-2)
Input: data = [1, 3, 5, 7, 9], n = 5, key = 6  
Output: -1 (karena angka 6 tidak ditemukan dalam array)
*/

#include <iostream>
using namespace std;

int searchRecursive(int data[], int n, int key){
    int result;

    if (n > 0){
        if (key == data[n-1]){
            result = n-1;
        } else{
            result = searchRecursive(data, (n-1), key);
        }
    } else{
        result = -1;
    }

    return result;
}

int main(){
    int n;
    cin >> n;
    int data[n];
    
    for (int i = 0; i < n; i++){
        cout << "Enter data " << i+1 << ": ";
        cin >> data[i];
    }

    int key;
    cout << "Enter the number you're looking for: ";
    cin >> key;

    cout << searchRecursive(data, n, key);

    return 0;
}