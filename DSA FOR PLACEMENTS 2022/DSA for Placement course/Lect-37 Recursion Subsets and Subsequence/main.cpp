//
//  main.cpp
//  Lect-37 Recursion Subsets and Subsequence
//
//  Created by Himanshu Bairwa on 18/08/22.
//

/*
 QUESTION 1: SUBSETS
 
 LINK: https://leetcode.com/problems/subsets/
 
 CODE:
 
 class Solution {
 private:
     void solve(vector<int> nums, vector<int> output, int index,vector<vector<int>>& ans) {
         // base case
         if(index>=nums.size()) {

             ans.push_back(output);
             return;
         }
  
         // exclude
         
         solve(nums,output,index+1,ans);
         
         // include
         
         int element = nums[index];
         output.push_back(element);
         solve(nums,output,index+1,ans);
     
     
     
     
     }
     
     
     
 public:
     vector<vector<int>> subsets(vector<int>& nums) {
         
         vector<vector<int>> ans;
         vector<int> output;
         int index = 0;
         solve(nums,output,index,ans);
         return ans;
         
         
         
         
     }
 };
 
 
 
 
 
 
 QUESTION 2 : SUBSEQUENCE OF STRING
 
 LINK: https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16
 
 CODE:
 
 // ans ki value pass by reference bhejptaki extra memory na ho and usme hi kaam chal jayega
 void solve(string str, string output, int index,vector<string>& ans){
     // base case
     if(index>=str.length()){
         if(output.length()>0){
              ans.push_back(output);
         }
         return;
     }
     
     //exclude
     solve(str,output,index+1,ans);
     
     //include
     char element = str[index];
     output.push_back(element);
     solve(str,output,index+1,ans);
     
     
 }



 vector<string> subsequences(string str){

     vector<string> ans;
     string output = "";
     int index  = 0;
     solve(str,output,index,ans);
     return ans;
 }

 
 QUESTION 3: Letter Combinations of a Phone Number
 
 LINK:  https://leetcode.com/problems/letter-combinations-of-a-phone-number/
 
 
 CODE:
 
 
 class Solution {

 private:
     void solve(string digits,string output,int index,vector<string>& ans,string mapping[]){
         
         //base case
         if(index>=digits.length()) {
             ans.push_back(output);
             return;
         }

         // Recursive call fucntion
         
          // coverting char value to integer (ascii to integer by subtractiong from zero)
             int number = digits[index] - '0';
             string value = mapping[number];
             
             for(int i = 0;i<value.length();i++){
                 output.push_back(value[i]);
                 //recursive call for remaining all letters
                 solve(digits,output,index+1,ans,mapping);
                 output.pop_back();
                
             }
        
     }
     
     
     
     
     
 public:
     vector<string> letterCombinations(string digits) {
         vector<string> ans;
         if(digits.length()==0){
             return ans;
         }
         string output = "";
         int index = 0;
         string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
          solve(digits,output,index,ans,mapping);
         return ans;
         
     }
 };
 
 
 
 
 */
