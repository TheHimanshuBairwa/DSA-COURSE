//
//  main.cpp
//  Lect-49 Maximum Path Sum DP
//
//  Created by Himanshu Bairwa on 13/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: Maximum Path Sum | From any node to any node
 
 LINK:  https://leetcode.com/problems/binary-tree-maximum-path-sum/submissions/
 
 code:
 
 class Solution {
 public:
     int solve(TreeNode* root, int &res){
         // base case
         if(root == NULL){
             return 0;
         }
         
         int l = solve(root->left,res);
         int r = solve(root->right,res);
         
         int temp = max(max(l,r) + root->val, root->val);
         int ans = max(temp, root->val+l+r);
         res = max(res,ans);
         return temp;
     }
     int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
         solve(root,res);
         return res;
     }
 };
 
 
 
 */
