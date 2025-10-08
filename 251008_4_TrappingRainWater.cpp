/*
Date: 8 Oktober 2025
Time: 20M 58S
Desc: Trapping Rain Water
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

Input: height = [4,2,0,3,2,5]
Output: 9
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int height[n];
    
    for (int i = 0; i < n; i++){
        cin >> height[i];
    }
    
    int left[n];
    left[0] = height[0];
    for (int i = 1; i < n; i++){
        left[i] = max(left[i-1], height[i]);
    }
    
    int right[n];
    right[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--){
        right[i] = max(right[i+1], height[i]);
    }
    
    int water, sum = 0;
    for (int i = 0; i < n; i++){
        water = min(left[i], right[i]) - height[i];
        sum += water;
    }
    
    cout << sum;
    
    return 0;
}