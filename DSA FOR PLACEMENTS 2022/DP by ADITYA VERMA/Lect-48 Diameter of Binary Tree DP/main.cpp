//
//  main.cpp
//  Lect-48 Diameter of Binary Tree DP
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
 DIAMETER OF BINARY TREE
 
 CODE:
 
 class Solution {
 public:
     
     int solve(TreeNode* root, int & res){
         // base case
         if(root == NULL){
             return 0;
         }
         
         int l = solve(root->left,res);
         int r = solve(root->right, res);
         
         int temp = 1 + max(l,r);
         int ans = max(temp, 1+l+r);
         res = max(res,ans);
         
         return temp;
     }
     
     
     int diameterOfBinaryTree(TreeNode* root) {
         int res = INT_MIN;
         solve(root,res);
         return res;
     }
 };
 
 */
