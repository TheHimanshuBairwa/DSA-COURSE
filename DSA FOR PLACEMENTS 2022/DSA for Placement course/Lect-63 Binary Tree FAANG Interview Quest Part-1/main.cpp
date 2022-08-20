//
//  main.cpp
//  Lect-63 Binary Tree FAANG Interview Quest Part-1
//
//  Created by Himanshu Bairwa on 30/06/22.
//

#include <iostream>
using namespace std;

int main() {

    return 0;
}


/*
 // QUESTION 1--> HEIGHT OF BINARY TREE
 
 LINK--> https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#
 
 class Solution{
     public:
     //Function to find the height of a binary tree.
     int height(struct Node* node){
         
         // base case
         if(node == NULL){
             return 0;
         }
         
         int left = height(node->left);
         int right = height(node->right);
         
         int ans = max(left,right) + 1;
         return ans;
     }
 };
 
 */


/*
 QUESTION 2--> DIAMETER OF BINARY TREE
 
 LINK--> https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
 
 CODE- T.c-->O(n_square) can be optimized
 
 class Solution {
  
 private: int height(struct Node* node){
         
         // base case
         if(node == NULL){
             return 0;
         }
         
         int left = height(node->left);
         int right = height(node->right);
         
         int ans = max(left,right) + 1;
         return ans;
     }

 public:
     // Function to return the diameter of a Binary Tree.
     int diameter(Node* root) {
         // base case
         if(root==NULL){
             return 0;
         }
         
         int op1 = diameter(root->left);
         int op2 = diameter(root->right);
         int op3 = height(root->left) + 1 + height(root->right);
         
         int ans = max(op1,max(op2,op3));
         return ans;
     }
 };
 
 
 
 //OPTIMIZED SOLUTION IN TC-O(N)
 
 class Solution {
   private: int height(struct Node* node){
         
         // base case
         if(node == NULL){
             return 0;
         }
         
         int left = height(node->left);
         int right = height(node->right);
         
         int ans = max(left,right) + 1;
         return ans;
     }
   public:
     // Function to return the diameter of a Binary Tree.
     
     pair<int,int> diameterFast(Node* root){
         
            // base case
         if(root==NULL){
             pair<int,int> p = make_pair(0,0);
             //make_pair assign values to each pair of in it
             
             return p;
         }
         
         pair<int,int> left = diameterFast(root->left);
         pair<int,int> right = diameterFast(root->right);
         
         int op1 = left.first;
         int op2 = right.first;
         int op3 = left.second + 1 + right.second;
         
         pair<int,int> ans;
         ans.first = max(op1,max(op2,op3));
         ans.second = max(left.second,right.second) + 1;
         return ans;
     }
         
         
     
     int diameter(Node* root) {
         return diameterFast(root).first;
     }
 };
 
 /*
 APPROACH 3 BY ---> STRIVER
 
 class Solution {
public:
    
    int height(TreeNode* root, int &maxi){
        if(root == NULL){
            return 0;
        }
        
        int lh = height(root->left,maxi);
        int rh = height(root->right,maxi);
         maxi = max(maxi,lh+rh);
        return 1 + max(lh,rh);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = INT_MIN;
        height(root, maxi);
        return maxi;
        
    }
};
 
 */

/*
 QUESTION 3--> CHECK A BALANCED TREE

 LINK-->  https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
 
 public:
     //Function to check whether a binary tree is balanced or not.
    
     pair<bool,int> isBalancedfast(Node *root){
         
          //base case
         if(root==NULL){
            pair<bool,int> p = make_pair(true,0);
             return p;
         }
         
         pair<bool,int> left = isBalancedfast(root->left);
         pair<bool,int> right = isBalancedfast(root->right);
         
         
         
         bool leftAns = left.first;
         bool rightAns = right.first;
         
         bool diff = abs(left.second - right.second) <= 1;
         
         pair<bool,int> ans;
         ans.second= max(left.second,right.second) + 1;
         if(leftAns && rightAns && diff){
              ans.first = true;
         }else{
              ans.second = false;
         }
         return ans;
     }
     bool isBalanced(Node *root)
     {
        return isBalancedfast(root).first;
     }
 };
 
 T.C = O(N)
 
 /*
 APPROACH BY --> STRIVER TC: O(n)

class Solution {
public:
    
    int height(TreeNode* root){
        if(root == NULL) {
            return 0;
        }
        
        int lh = height(root->left);
        if(lh == -1)
            return -1;
        int rh = height(root->right);
        if(rh == -1)
            return -1;
        
        if(abs(lh - rh) > 1)
            return -1;
        return 1 + max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
       int ans = height(root);
        if(ans != -1)
            return true;
        else 
            return false;
        
    }
};
 
 
 
 */


/*
 QUESTION 4--> DETERMINE IF TWO TREES ARE IDENTICAL OR NOT
 
 LINK--> https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
 
 class Solution
 {
     public:
     //Function to check if two trees are identical.
     bool isIdentical(Node *r1, Node *r2)
     {
         // base case
         if(r1 == NULL && r2 == NULL){
             return true;
             
         }
         
         if(r1 == NULL && r2 != NULL){
             return false;
         }
         
         if(r1 != NULL && r2 == NULL){
             return false;
         }
         
         
         bool left = isIdentical(r1->left , r2->left);
         bool right = isIdentical(r1->right , r2->right);
         
         bool value = r1->data == r2->data;
         
         if(left && right && value){
             return true;
         }else {
             return false;
         }
         
     }
 };
 
 
 */




/*
 QUESTION 5 --> SUM TREE
 
 LINK--> https://practice.geeksforgeeks.org/problems/sum-tree/1#
 
 CODE-->
 
 class Solution
 {
     public:
     pair<bool,int> isSumTreeFast(Node* root){
         
         // base case
         if(root == NULL){
             pair<bool,int> p = make_pair(true,0);
             return p;
         }
         
         // checking for leaf node that it is always a sum tree
         if(root->left==NULL && root->right==NULL){
              pair<bool,int> p = make_pair(true,root->data);
             return p;
         }
         
         pair<bool,int> leftAns = isSumTreeFast(root->left);
         pair<bool,int> rightAns = isSumTreeFast(root->right);
         
         bool isleftSum = leftAns.first;
         bool isrightSum = rightAns.first;
         
         int leftSum = leftAns.second;
         int rightSum = rightAns.second;
         
         bool condn = root->data == leftSum + rightSum;
         
         pair<bool,int> ans;
         if(isleftSum && isrightSum && condn){
             ans.first = true;
             ans.second = root->data + leftSum + rightSum;
         }else{
             ans.first= false;
             
         }
         
          return ans;
     }
     
     
     bool isSumTree(Node* root)
     {
            return isSumTreeFast(root).first;
     }
 };
 
 
 */
