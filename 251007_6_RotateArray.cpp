/*
Date: 7 Oktober 2025
Time: 20M 48S
Desc: Rotate Array
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
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
    
    int k;
    cin >> k;
    
    for (int i = 0; i < k; i++){
        int temp = nums[n-1];
        for (int j = n-2; j >= 0; j--){
            nums[j+1] = nums[j];
        }
        nums[0] = temp;
    }
    
    for (int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    
    return 0;
}