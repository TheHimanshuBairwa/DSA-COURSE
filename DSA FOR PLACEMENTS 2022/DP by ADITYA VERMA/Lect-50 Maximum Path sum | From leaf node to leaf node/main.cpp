//
//  main.cpp
//  Lect-50 Maximum Path sum | From leaf node to leaf node
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
 QUESTION:   Maximum Path sum | From leaf node to leaf node
 
 LINK:  https://practice.geeksforgeeks.org/problems/maximum-path-sum/1
 
 CODE:
 

 
 class Solution {
 public:

     int solve(Node* root,int &res){
         // base case
         if(root == NULL){
             return 0;
         }
         
         if(root->left == NULL && root->right == NULL){
             return root->data;
         }
         
         int l = solve(root->left,res);
         int r = solve(root->right, res);
         
         if(root->left==NULL)
             return (root->data + r);
         if(root->right==NULL)
             return (root->data + l);
        int temp = max(l, r) + root->data;
        int ans = l + r + root->data;
        res = max(res, ans);

        return temp;
     }

     int maxPathSum(Node* root)
     {
         if(root==NULL)
             return 0;
         if(root->left==NULL && root->right==NULL)
             return root->data;
        int res = INT_MIN;
        int x = solve(root, res);
         if(root->left==NULL || root->right==NULL)
             return max(res ,x);
        
        return res;
     }
 };

 
 
 
 */
