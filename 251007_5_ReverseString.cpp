/*
Date: 7 Oktober 2025
Time: 11M 11S
Desc: Reverse String
Write a function that reverses a string. The input string is given as an array of characters s. You must do this by modifying the input array in-place with O(1) extra memory.

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char s[n];

    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    
    int i = 0, j = n-1;
    while (i != j && i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp; 
        i++;
        j--;
    }

    cout << s;
    
    return 0;
}