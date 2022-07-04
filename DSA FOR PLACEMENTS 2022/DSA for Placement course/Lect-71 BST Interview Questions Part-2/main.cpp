//
//  main.cpp
//  Lect-71 BST Interview Questions Part-2
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
 QUESTION 1--> TWO SUM IN BST
 
 LINK-->https://www.codingninjas.com/codestudio/problems/two-sum-in-a-bst_1062631?leftPanelTab=1
 
 CODE-->
 
 void inOrder(BinaryTreeNode<int>* root,vector<int> &in){
     
     // base case
     if(root == NULL){
         return;
     }
     
     inOrder(root->left,in);
     in.push_back(root->data);
     inOrder(root->right,in);
 }



 bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
     vector<int> inOrderVal;
 
 // store inorder which is in sorted form into vector
     inOrder(root,inOrderVal);
 
     int i = 0;
     int j = inOrderVal.size()-1;
     while(i<j){
         int sum = inOrderVal[i] + inOrderVal[j];
         
         if(sum == target)
             return true;
         else if(sum>target)
             j--;
         else
             i++;
     }
     return false;
 }
 
 
 
 
 */


/*
 QUESTION 2: FLATTEN BST TO A SORTED LINKED LIST
 
 LINK-->   https://www.codingninjas.com/codestudio/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTab=1
 
 
 CODE--->
 METHOD_2:
 
 void inOrder(TreeNode<int>* root ,vector<int> &in){
     
     // base case
     if(root == NULL){
         return;
     }
     
     inOrder(root->left,in);
     in.push_back(root->data);
     inOrder(root->right,in);
 }


 TreeNode<int>* flatten(TreeNode<int>* root)
 {
     // algo 2/approach 2
     
 //     step1: store inroder into vector
     vector<int> inOrderVal;
     inOrder(root,inOrderVal);
     int n = inOrderVal.size();
     
     TreeNode<int>* newRoot = new TreeNode<int>(inOrderVal[0]);
     TreeNode<int>* curr = newRoot;
     
     for(int i =1;i<n;i++){
        // step2: create new node and start linking with next node
         // using right for next pointing and left as NULL
         // ans then go to next node and do that for all node
         // except last node
         TreeNode<int>* temp = new TreeNode<int>(inOrderVal[i]);
         curr->left = NULL;
         curr->right = temp;
         curr = temp;
         
     }
     
     // step3: handling last node
     curr->left = NULL;
     curr->right = NULL;
     
     return newRoot;
     
 }

 
 
 */


/*
 QUESTION 3: NORMAL BST TO BALANCED BST

 LINK-->https://www.codingninjas.com/codestudio/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=1
 
 
 CODE-->
 
 void inOrder(TreeNode<int>* root ,vector<int> &in){
     
     // base case
     if(root == NULL){
         return;
     }
     
     inOrder(root->left,in);
     in.push_back(root->data);
     inOrder(root->right,in);
 }

 TreeNode<int>* inordertoBST(int s,int e,vector<int> &inOrderVal){
     
     // base case
     if(s>e)
         return NULL;
     
     int mid = (s+e)/2;
     
     TreeNode<int>* root  = new TreeNode<int>(inOrderVal[mid]);
     root->left = inordertoBST(s,mid-1,inOrderVal);
     root->right = inordertoBST(mid+1,e,inOrderVal);
     
     
    return root;

 }

 TreeNode<int>* balancedBst(TreeNode<int>* root) {
     
     //     step1: store inroder into vector
     vector<int> inOrderVal;
     inOrder(root,inOrderVal);

     return inordertoBST(0,inOrderVal.size()-1,inOrderVal);
     
 }

 */



/*
 QUESTION 4 : PREORDER TRAVERSAL OF BST OR BST FROM PREORDER
 
 LINK--> https://www.codingninjas.com/codestudio/problems/preorder-traversal-to-bst_893111?leftPanelTab=1
 
 CODE-->
 
 
 BinaryTreeNode<int>* solve(vector<int> &preorder,int mini,int maxi,int &i){
     
     // base case
     if(i>=preorder.size()){
         return NULL;
     }
     if(preorder[i]< mini || preorder[i] > maxi){
         return NULL;
     }
     
     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i++]);
     root->left = solve(preorder,mini,root->data,i);
     root->right = solve(preorder,root->data,maxi,i);
     
     return root;
     
 }

 BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
     int mini = INT_MIN;
     int maxi = INT_MAX;
     int i = 0;
    return solve(preorder,mini,maxi,i);
 }
 
 
 
 */
