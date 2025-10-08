/*
Date: 1 Oktober 2025
Time: 10M 14S
Desc: Sum Recursive
Buatlah function yang bersifat rekursif sumRecursive(int data[], int n) yang mengembalikan jumlah semua elemen array berukuran n menggunakan rekursif.
Input: data = [1, 2, 3, 4, 5], n = 5  
Output: 15 (karena 1 + 2 + 3 + 4 + 5 = 15)
*/

#include <iostream>
using namespace std;

int sumRecursive(int data[], int n){
    int result;
    if (n > 0){
        result = data[n-1] + sumRecursive(data, n-1);
    } else{
        result = 0;
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

    cout << sumRecursive(data, n);

    return 0;
}