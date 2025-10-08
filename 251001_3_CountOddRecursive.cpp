/*
Date: 1 Oktober 2025
Time: 5M 29S
Desc: Count Odd Recursive
Buatlah function yang bersifat rekursif countOddRecursive(int data[], int n) yang mengembalikan jumlah elemen ganjil dalam array berukuran n menggunakan rekursi.
Input: data = [3, 9, 2, 8, 4, 7], n = 6  
Output: 3 (karena angka ganjilnya adalah 3, 9, dan 7)  
*/

#include <iostream>
using namespace std;

int countOddRecursive(int data[], int n){
    int help, result;

    if (n == 0){
        result = 0;
    } else{
        help = data[n-1] %2;

        if (help != 0){
            result = countOddRecursive(data, (n-1)) +1;
        } else{
            result = countOddRecursive(data, (n-1));
        }
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

    cout << countOddRecursive(data, n);

    return 0;
}