/*
Date: 8 Oktober 2025
Time: 13M 32S
Desc: Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Input: nums = [3,2,4], target = 6
Output: [1,2]

Input: nums = [3,3], target = 6
Output: [0,1]
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
    
    int target;
    cin >> target;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (nums[i] + nums[j] == target && i != j){
                cout << i << ", " << j;
                return 0;
            }
        }
    }
    
    return 0;
}