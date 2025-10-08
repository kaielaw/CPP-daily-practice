/*
Date: 8 Oktober 2025
Time: 11M 3S
Desc: Contains Duplicate
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Input: nums = [1,2,3,1]
Output: true
Explanation:
The element 1 occurs at the indices 0 and 3.

Input: nums = [1,2,3,4]
Output: false
Explanation:
All elements are distinct.

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int nums[n];
    
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    int position = 0, total;
    while (position < n){
        total = 0;
        for (int i = 0; i < n; i++){
            if (position != i && nums[position] == nums[i]){
                total += 1;
            }
        }
        
        if (total > 0){
            cout << "true";
            return 0;
        }
        position++;
    }
    
    if (total == 0){
        cout << "false";
    }
    
    return 0;
}