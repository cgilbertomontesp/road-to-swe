/*

283. Move Zeroes

Easy

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]

https://leetcode.com/problems/move-zeroes/description/

*/

#include<iostream>
#include<vector>

using namespace std;

//Solution class with method moveZeroes
class Solution {
public:

    // Solution function. 
    // O(n) time complexity.
    void moveZeroes(vector<int>& nums) {
        // Two pointer approach.
        int slow = 0;
        int fast = 0;

        // Fast pointer goes through the array.
        while(fast < nums.size()){
            //When it finds an element different from zero it moves it to the postion of the slow pointer and the slow pointer moves by one.
            if(nums[fast] != 0){
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }

        // Fill remaining positions with zero.
        while(slow < nums.size()){
            nums[slow] = 0;
            slow++;
        }
    }
};

int main(){
    Solution solution;

    //Testing values
    vector<int>nums = {0,1,0,3,12};

    solution.moveZeroes(nums);

    //Visualization 
    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}