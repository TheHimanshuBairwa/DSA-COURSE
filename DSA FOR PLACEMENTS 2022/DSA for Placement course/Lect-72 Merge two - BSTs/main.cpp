//
//  main.cpp
//  Lect-72 Merge two - BSTs
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
 QUESTION : MERGE TWO BSTs
 
 LINK-->
 
 
 CODE--APPROACH-1-->

 void inorder(TreeNode<int>* root,vector<int> &in) {
     // base case
     if(root==NULL)
         return ;
     
     inorder(root->left,in);
     in.push_back(root->data);
     inorder(root->right,in);
 }

 vector<int> mergedInorderArrays(vector<int> &bst1, vector<int> &bst2){
     vector<int> ans(bst1.size()+ bst2.size());
     
     int i =0,j=0;
     int k= 0;
     while(i < bst1.size() && j < bst2.size()){
         
         if(bst1[i] < bst2[j]){
             ans[k++]  = bst1[i];
             i++;
         }
         else{
              ans[k++]  = bst2[j];
             j++;
         }
         
     }
     while(i < bst1.size()){
         ans[k++] = bst1[i];
         i++;
     }
     while(j < bst2.size()){
         ans[k++] = bst2[j];
         j++;
     }
     return ans;
 }

  TreeNode<int>* inordertoBST(int s,int e, vector<int> &inOrderVal){
      
      // base case
      if(s>e)
          return NULL;
      
      int mid = (s+e)/2;
      
      TreeNode<int>* root  = new TreeNode<int>(inOrderVal[mid]);
      root->left = inordertoBST(s,mid-1,inOrderVal);
      root->right = inordertoBST(mid+1,e,inOrderVal);
      
      
     return root;
  }
 
 
 TreeNode<int>* mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    
     // step 1 : store sorted arrays
     vector<int> bst1;
     vector<int> bst2;
     inorder(root1,bst1);
     inorder(root2,bst2);
     
     //step 2: merg sorted inorder arrays
     vector<int> mergeArray =  mergedInorderArrays(bst1,bst2);
      
     // step 3: make BST using inorder
     int s= 0;
     int e = mergeArray.size()-1;
     return inordertoBST(s,e,mergeArray);
     
 }
 
 
Code--Approach-2-->
 
 // fucntion to covert BST into linked list
 void covertIntosortedDLL(TreeNode<int> *root,TreeNode<int>* &head){
     
     // base case
     if(root == NULL){
         return ;
     }
            
     
     covertIntosortedDLL(root->left,head);
     root->right = head;
     
     if(head != NULL)
         head->left = NULL;
     
     head = root;
      
 }

 // merge to spreted linked list into one
 TreeNode<int>* mergeLinkedList(TreeNode<int> *head1,TreeNode<int> *head2){
     
     TreeNode<int> *head = NULL;
     TreeNode<int> *tail = NULL;
     
     while(head1 != NULL && head2 != NULL){
             
         if(head1->data < head2-> data){
             
             if(head == NULL){
                 head = head1;
                 tail = head1;
                 head1 = head1->right;
                 
             }else{
                  tail->right = head1;
                  head1->left = tail;
                  tail = head1;
                  head1 = head1->right;
                 
             }
             
             
         }
         else{
              if(head == NULL){
                  
                 head = head1;
                 tail = head1;
                 head1 = head1->right;
                 
             }else{
                  tail->right = head2;
                  head2->left = tail;
                  tail = head1;
                  head2 = head2->right;
             }
         }
     }
     while(head1 != NULL){
                  tail->right = head1;
                  head1->left = tail;
                  tail = head1;
                  head1 = head1->right;
     }
     
     while(head2 != NULL){
                  tail->right = head2;
                  head2->left = tail;
                  tail = head1;
                  head2 = head2->right;
     }

         return head;
 }
 // counting nodes
 int countNodes(TreeNode<int> *head){
    int cnt = 0;
     TreeNode<int> *temp = head;
     while(head != NULL){
         cnt++;
         temp = temp->right;
         
     }
     return cnt;
 }
 // COVERTING SORTED LINKED LIST TO BST
 TreeNode<int>* sortedLLtoBST(TreeNode<int>* &head,int n){
     
     if(n<=0 || head == NULL){
         return NULL;
         
     }
     TreeNode<int> *left = sortedLLtoBST(head,n/2);
     TreeNode<int>* root = head;
     root->left = left;
     
     head = head->right;
     
     root-> right = sortedLLtoBST(head,n-n/2-1);
     return root;
     
 }



 TreeNode<int>* mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    
     // ALGO 2
     
     //Step1: convert two BST into Sorted Doubly LInked LIst
     // in-place not extra memory used
     TreeNode<int>* head1 = NULL;
     covertIntosortedDLL(root1,head1);
     head1->left = NULL;
     
     TreeNode<int>* head2 = NULL;
     covertIntosortedDLL(root2,head2);
     head2->left = NULL;
     
     
     //Step2: merge Two sorted Linked List
     TreeNode<int> *head = mergeLinkedList(head1,head2);
     
     // step3: Covert sorted linked list to BST
     
     return sortedLLtoBST(head,countNodes(head));
     
     
 
 
 
 */
