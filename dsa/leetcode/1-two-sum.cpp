/*

1. Two Sum

Easy

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Only one valid answer exists.

https://leetcode.com/problems/two-sum/description/

*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

//Solution class with method twoSum
class Solution {
public:

    // Solution function, complexity O(n)
    // My approach consists in iterating the nums array trying to find the complementary element to the target and the actual element of the iteration in nums. 
    // This means that we are solving for nums[i] + x = target --> x = target - nums[i], x is the complement.
    // So we check if this complement is already on our hashmap. If it is, we return its index and the index of the element we are currently evaluating as our answer.  

    vector<int> twoSum(vector<int>& nums, int target) {
        // Create the answer array and the hashmap that stores elements in nums with their index
        vector<int> answer;
        unordered_map<int, int> hashmap;


        for(int i = 0; i < nums.size(); i++){

            int complement = target - nums[i]; // Complement of current element

            // Looks for complement in hashtable
            if (hashmap.find(complement) != hashmap.end()){ 
                // Complement found, adds indexes to answer array
                answer.push_back(hashmap[complement]);
                answer.push_back(i);
            } else{
                // Not found, add element to the hashmap with it's index
                hashmap[nums[i]] = i;
            }
        }

        return answer;
    }
};

int main(){
    Solution solution;

    //Testing values
    vector<int>nums = {3, 2, 4};
    int target = 6;

    vector<int> answer = solution.twoSum(nums, target);

    //Visualization 
    cout << answer[0] << ", " << answer[1] << endl;
    
    return 0;
}