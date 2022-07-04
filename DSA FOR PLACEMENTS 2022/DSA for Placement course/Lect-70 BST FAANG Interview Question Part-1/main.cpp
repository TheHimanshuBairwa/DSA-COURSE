//
//  main.cpp
//  LEct-70 BST FAANG Interview Question Part-1
//
//  Created by Himanshu Bairwa on 03/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION 1--> VALIDATE BST
 
 LINK--> https://www.codingninjas.com/codestudio/problems/validate-bst_981275
 
 CODE-->
 
 bool isBST(BinaryTreeNode<int>* root,int min,int max){
     // base case
     if(root == NULL){
         return true;
     }
     
     if(root->data > min && root->data < max){
         
         bool left = isBST(root->left, min ,root->data);
         bool right = isBST(root->right, root->data ,max);
         
         return left&&right;
     }
     else{
         return false;
     }
     
 }

 bool validateBST(BinaryTreeNode<int>* root)
 {
     return isBST(root,INT_MIN,INT_MAX);
 }
 
 */


/*
 QUESTION 2-> FIND Kth LARGEST ELEMENT IN BST
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/find-k-th-smallest-element-in-bst_1069333?leftPanelTab=1
 
 
 CODE-->
 
 int solve(BinaryTreeNode<int>* root, int &i,int k) {
         // base case
      if(root == NULL){
          return -1;
      }
      //LNR
      //L
      int left = solve(root->left,i,k);
      if(left != -1){
          return left;
      }
      //N
      i++;
      if( i==k ){
          return root->data;
      }
      
      //R
      int right = solve(root->right,i,k);
  }


 int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i = 0;
     int ans = solve(root,i,k);
     return ans;
 }
 
 */


/*
 QUESTION 3--> PREDECESSOR AND SUCCESSOR IN BST
 
 LINK--> https://www.codingninjas.com/codestudio/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1
 
 CODE-->
 
 pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
 {
    //find key
     BinaryTreeNode<int>* temp = root;
     int pred = -1;
     int succ = -1;
     
     while(temp->data != key){
         if(temp->data > key){
             succ = temp->data;
             temp = temp->left;
             
         }else{
             pred = temp->data;
             temp = temp->right;
            
         }
     }
     
     // find pred and succ
     
     
     // pred
     BinaryTreeNode<int>* leftTree = temp->left;
     while(leftTree != NULL) {
         pred = leftTree->data;
         leftTree = leftTree->right;
     }
     
     
     // succ
     BinaryTreeNode<int>* rightTree = temp->right;
     while(rightTree != NULL){
         succ = rightTree->data;
         rightTree = rightTree->left;
     }
     
 //     pair<int,int> ans = make_pair(pred,succ);
     return {pred,succ};
      
 }

 */


/*
 QUESTION 4 --> LCA IN BST
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/lca-in-a-bst_981280?leftPanelTab=1
 
 
 CODE-->
 
 USING RECURSION
 
 TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
 {
     if(root == NULL){
         return NULL;
     }
     
     if(root->data > P->data && root->data > Q -> data){
        return LCAinaBST(root->left,P,Q);
     }
     
     if(root->data < P->data && root->data < Q->data){
        return LCAinaBST(root->right,P,Q);
     }
     return root;
     
 }
 
 
 
 USING ITERATION
 
 TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
 {
    
     
     while(root != NULL){
         if(root->data > P->data && root->data > Q -> data){
               root = root->left;
     }
     
         else if(root->data < P->data && root->data < Q -> data){
               root = root->right;
     }
      
         else{
             return root;
         }
     
     }
 
 
 */
