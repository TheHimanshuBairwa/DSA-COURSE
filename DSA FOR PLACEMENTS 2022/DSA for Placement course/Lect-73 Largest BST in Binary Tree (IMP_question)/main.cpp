//
//  main.cpp
//  Lect-73 Largest BST in Binary Tree (IMP_question)
//
//  Created by Himanshu Bairwa on 04/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION : LARGEST BST IN BINARY TREE
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/largest-bst-subtree_893103?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
 
 
 CODE-->
 
 class info{
   public:
     
     int maxi;
     int mini;
     bool isBST;
     int size;
 };

 info solve(TreeNode<int>* root, int &ans) {
     // base case
     if(root==NULL) {
         return {INT_MIN,INT_MAX,true,0};
     }
     
     info left = solve(root->left,ans);
     info right = solve(root->right,ans);
     
     info currNode;
     
     currNode.size = left.size + right.size + 1;
     currNode.maxi = max(root->data,right.maxi);
     currNode.mini = min(root->data,left.mini);
     
     if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)){
         currNode.isBST  = true;
     }else{
         currNode.isBST = false;
     }
     
     // update answer
     if(currNode.isBST){
         ans = max(ans,currNode.size);
     }
         
     return currNode;
 }

 int largestBST(TreeNode<int>* root)
 {
     int maxSize= 0;
     info temp = solve(root,maxSize);
     return maxSize;
 }

 
 
 
 */
