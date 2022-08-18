//
//  main.cpp
//  Lect-39 Permutation using recursion
//
//  Created by Himanshu Bairwa on 18/08/22.
//

/*
 QUESTION: PERMUTATIONS IN ARRAYS/ STRINGS
 
 LINK:  https://leetcode.com/problems/permutations/
 
 CODE:
 
 class Solution {
 private:
     void solve(vector<int> nums ,vector<vector<int>>& ans,int index) {
         //base case
         if(index>=nums.size()) {
             ans.push_back(nums);
             return;
         }
         
         for(int j =index;j<nums.size();j++) {
             swap(nums[index],nums[j]);
             //recursion call
             solve(nums,ans,index+1);
             //backtrack
             swap(nums[index],nums[j]);
         }
 }
     
     
     
     
     
     
     
 public:
     vector<vector<int>> permute(vector<int>& nums) {
         
         vector<vector<int>> ans;
         int index = 0;
         solve(nums,ans,index);
         return ans;
     }
 };
 
 
 
 */
