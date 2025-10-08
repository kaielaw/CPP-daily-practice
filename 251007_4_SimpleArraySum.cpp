/*
Date: 7 Oktober 2025
Time: 1M 57S
Desc: Simple Array Sum
Given an array of integers, find the sum of its elements.

Sample Input
6 --> size of array
1 2 3 4 10 11  --> values
Sample Output
31
*/

#include <iostream>
using namespace std;

int main(){
    int n, total = 0;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        total += arr[i];
    }
    
    cout << total;
    
    return 0;
}