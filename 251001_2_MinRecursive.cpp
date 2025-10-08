/*
Date: 1 Oktober 2025
Time: 3M 47S
Desc: Min Recursive
Buatlah function yang bersifat rekursif minRecursive(int data[], int n) yang mengembalikan elemen terkecil dalam array berukuran n menggunakan rekursif.
Input: data = [3, 9, 1, 7, 5], n = 5  
Output: 1 (karena elemen terkecil dalam array adalah 1)  
*/

#include <iostream>
using namespace std;

minRecursive(int data[], int n){
    int result;

    if (n > 0){
        result = data[n-1];

        if (result > minRecursive(data, (n-1))){
            result = minRecursive(data, (n-1));
        }
    } else{
        result = data[n];
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

    cout << minRecursive(data, n);

    return 0;
}