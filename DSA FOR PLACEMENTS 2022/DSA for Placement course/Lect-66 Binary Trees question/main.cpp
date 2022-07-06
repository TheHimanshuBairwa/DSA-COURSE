//
//  main.cpp
//  Lect-66 Binary Trees question
//
//  Created by Himanshu Bairwa on 02/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION 1-->  Construct Tree from Inorder & Preorder
 
 LINK-->  https://practice.geeksforgeeks.org/problems/construct-tree-1/1/
 
 CODE-->
 
 class Solution{
     public:
     void createmapping(int in[],map<int,int> &nodetoIndex,int n){
         for(int i =0;i<n;i++){
             nodetoIndex[in[i]] = i;
         }
     }
     
     Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,
     int n, map<int,int> &nodetoIndex){
         
         // base case
         if(index>=n || inorderStart > inorderEnd){
             return NULL;
         }
         // create a root node for element
         int element = pre[index++];
         Node* root = new Node(element);
         
         // find elements index in inorder
         int position = nodetoIndex[element];
         
         // recursive call
         root->left = solve(in,pre,index,inorderStart,position-1,n,nodetoIndex);
         root->right = solve(in,pre,index,position+1,inorderEnd,n,nodetoIndex);
         
         return root;
         
         
     }
     
     Node* buildTree(int in[],int pre[], int n)
     {
         int preorderIndex = 0;
         map<int,int> nodetoIndex;
         
         //created node to index mapping
         createmapping(in,nodetoIndex,n);
         
         Node* ans = solve(in,pre,preorderIndex,0,n-1,n,nodetoIndex);
         return ans;
         
     }
 };
 
 */



/*
 QUESTION 2--> Tree from Postorder and Inorder
 
 LINK-->  https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1/
 
 CODE-->
 
 void createmapping(int in[],map<int,int> &nodetoIndex,int n){
         for(int i =0;i<n;i++){
             nodetoIndex[in[i]] = i;
         }
     }

 Node* solve(int in[],int post[],int &index,int inorderStart,int inorderEnd,
     int n, map<int,int> &nodetoIndex){
         
         // base case
         if(index < 0 || inorderStart > inorderEnd){
             return NULL;
         }
         // create a root node for element
         int element = post[index--];
         Node* root = new Node(element);
         
         // find elements index in inorder
         int position = nodetoIndex[element];
         
         // recursive call [u=in case of inorder and post order we first build right subtree]
         root->right = solve(in,post,index,position+1,inorderEnd,n,nodetoIndex);
         root->left = solve(in,post,index,inorderStart,position-1,n,nodetoIndex);
         
         
         return root;
         
         
     }


 Node *buildTree(int in[], int post[], int n) {
     
         int postorderIndex = n-1;
         map<int,int> nodetoIndex;
         
         //created node to index mapping
         createmapping(in,nodetoIndex,n);
         
         Node* ans = solve(in,post,postorderIndex,0,n-1,n,nodetoIndex);
         return ans;
         
 }

 
 
 
 */
