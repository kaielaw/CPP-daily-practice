/*
Date: 8 Oktober 2025
Time: 18M 56S
Desc: Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements. Note that you must do this in-place without making a copy of the array.

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Input: nums = [0]
Output: [0]
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
    
    int position = 0;
    for (int i = 0; i < n; i++){
        if (nums[i] != 0){
            nums[position] = nums[i];
            position++;
        }        
    }
    
    for (int i = position; i < n; i++){
        nums[i] = 0;
    }
    
    for (int i = 0; i < n; i++){
        cout << nums[i] << " ";        
    }

    return 0;
}