//
//  main.cpp
//  Lect-64 Binary Tree FAANG Interview Questions
//
//  Created by Himanshu Bairwa on 01/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION 1--> ZIGZAG TREE traversal and print
 
 
 
 LINK--> https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1/
 
 class Solution{
     public:
     //Function to store the zig zag order traversal of tree in a list.
     vector <int> zigZagTraversal(Node* root)
     {
         vector<int> result;
         if(root == NULL){
             return result;
         }
         
         queue<Node*> q;
         q.push(root);
         
         bool leftToright = true;
         
         while(!q.empty()){
             
             int size =q.size();
             vector<int> ans(size);
             
             //level process
             for(int i =0;i<size;i++){
                 Node* frontNode = q.front();
                 q.pop();
                 
                 int index = leftToright ? i : size-i-1;
                 ans[index] = frontNode->data;
                 
                 if(frontNode->left){
                     q.push(frontNode->left);
                     
                 }
                 if(frontNode->right){
                     q.push(frontNode->right);
                 }
                 
             }
             
             // direction chanhge from left to right  to right to left
                 leftToright = !leftToright;
                 
                 // storing ans in result
                 for(auto i:ans){
                     result.push_back(i);
                 }
             }
           return result;
         }
         
     
 };
 
 
 */


/*
 QUESTION 2--> BOUNDARY TRAVERSAL OF BINARY TREE
 
 LINK-->  https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1/#
 
 CODE-->
 
 
 class Solution {
 public:

      void traverseLeft(Node* root, vector<int> &ans) {
         //base case
         if( (root == NULL) || (root->left == NULL && root->right == NULL) )
             return ;
             
         ans.push_back(root->data);
         if(root->left)
             traverseLeft(root->left, ans);
         else
             traverseLeft(root->right, ans);
             
     }
     
     void traverseLeaf(Node* root, vector<int> &ans) {
         //base case
         if(root == NULL)
             return ;
             
         if(root->left == NULL && root->right == NULL) {
             ans.push_back(root->data);
             return;
         }
         
         traverseLeaf(root->left, ans);
         traverseLeaf(root->right, ans);
         
     }
     
     void traverseRight(Node* root, vector<int> &ans) {
         //base case
         if( (root == NULL) || (root->left == NULL && root->right == NULL) )
             return ;
         
         if(root->right)
             traverseRight(root->right, ans);
         else
             traverseRight(root->left, ans);
             
         //wapas aagye
         ans.push_back(root->data);
             
     }
     
     vector <int> boundary(Node *root)
     {
          vector<int> ans;
         if(root == NULL)
             return ans;
             
         ans.push_back(root->data);
         
         //left part print/store
         traverseLeft(root->left, ans);
         
         //traverse Leaf Nodes
         
         //left subtree
         traverseLeaf(root->left, ans);
         //right subtree
         traverseLeaf(root->right, ans);
         
         //traverse right part
         traverseRight(root->right, ans);
         
         return ans;
     }
 };
 
 */






/*
 QUESTION 3--> VERTICAL ORDER TRAVERSAL OF BINARY TREE
 
 LINK-->  https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
 
 CODE-->
 
 class Solution
 {
     public:
     //Function to find the vertical order traversal of Binary Tree.
     vector<int> verticalOrder(Node *root)
     {
        map<int, map<int,vector<int> > > nodes;
         queue< pair<Node*, pair<int,int> > > q;
         vector<int> ans;
         
         if(root == NULL)
             return ans;
           
           // for 1st root node
         q.push(make_pair(root, make_pair(0,0)));
         
         while(!q.empty()) {
             pair<Node*, pair<int,int> > temp = q.front();
             q.pop();
             Node* frontNode = temp.first;
             int hd = temp.second.first;
             int lvl = temp.second.second;
             
             nodes[hd][lvl].push_back(frontNode->data);
             
             if(frontNode->left)
                 q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1) ));
                 
             if(frontNode->right)
                 q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
         }
         
         for(auto i: nodes) {
             
             for(auto j:i.second) {
                 
                 for(auto k:j.second)
                 {
                     ans.push_back(k);
                 }
             }
         }
         return ans;
        
        
     }
 };

 */


/*
 QUESTION 4 : TOP VIEW OF BINARY TREE
 
 LINK-->   https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1/
 
 CODE-->
 
 class Solution
 {
     public:
     //Function to return a list of nodes visible from the top view
     //from left to right in Binary Tree.
     vector<int> topView(Node *root)
     {
         vector<int> ans;
         if(root == NULL){
             return ans;
         }
         
         map<int, int> topNode;
         queue<pair<Node*,int> > q;
                 //<root , HD>
         
         q.push(make_pair(root,0));
         
         while(!q.empty()){
             pair<Node*,int> temp = q.front();
             q.pop();
             
             Node* frontNode = temp.first;
             int hd = temp.second;
              
              
              // if one value is present for HD then do nothing
              // maintain one to one mapping
              if(topNode.find(hd) == topNode.end()){
                  // above line -> map searched for hd as key and find that
                  //whether is value present in hd key
                  // if not present then it ans will be equal to topNode.end()
                  
                  topNode[hd] = frontNode->data;
              }
              
              if(frontNode->left){
                  q.push(make_pair(frontNode->left,hd-1));
                  
              }
              
              if(frontNode->right){
                  q.push(make_pair(frontNode->right,hd+1));
              }
              
         }
         
         for(auto i: topNode){
             ans.push_back(i.second);
         }
         
         
         return ans;
         
         
     }

 };
 
 
 */


/*
 QUESTION 5-->  BOTTOM VIEW OF BINARY TREE
 
 LINK -->  https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1/
 
 CODE-->
 
 class Solution {
   public:
     vector <int> bottomView(Node *root) {
        
         vector<int> ans;
         if(root == NULL){
             return ans;
         }
         
         map<int, int> topNode;
         queue<pair<Node*,int> > q;
                 //<root , HD>
         
         q.push(make_pair(root,0));
         
         while(!q.empty()){
             pair<Node*,int> temp = q.front();
             q.pop();
             
             Node* frontNode = temp.first;
             int hd = temp.second;
              
                  topNode[hd] = frontNode->data;
              
              if(frontNode->left){
                  q.push(make_pair(frontNode->left,hd-1));
                  
              }
              
              if(frontNode->right){
                  q.push(make_pair(frontNode->right,hd+1));
              }
              
         }
         
         for(auto i: topNode){
             ans.push_back(i.second);
         }
         
         
         return ans;
     }
 };
 
 
 
 */



/*
 QUESTION 6 --> LEFT VIEW OF BINARY TREE
 
 LINK-->  https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1/
 
 
 CODE -->
 
 void solve(Node* root, vector<int> &ans,int level){
     
     //base case
     if(root==NULL){
         return;
     }
     
      // we entered into a new level
      if(level==ans.size()){
          ans.push_back(root->data);
      }
      
      //recursive call for first for left side then for right side
      solve(root->left,ans,level+1);
      solve(root->right,ans,level+1);
     
 }


 vector<int> leftView(Node *root)
 {
    vector<int> ans;
    solve(root,ans,0);
    return ans;
    
 }
 
 */




/*
QUESTION 7 --> RIGHT VIEW OF BINARY TREE
 
 LINK--> https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
 
 CODE-->
 
 void solve(Node* root, vector<int> &ans,int level){
     
     //base case
     if(root==NULL){
         return;
     }
     
      // we entered into a new level
      if(level==ans.size()){
          ans.push_back(root->data);
      }
      
      //recursive call for first for right side then for left side
        solve(root->right,ans,level+1);
        solve(root->left,ans,level+1);
      
     
 }


 vector<int> rightView(Node *root)
 {
    vector<int> ans;
    solve(root,ans,0);
    return ans;
    
 }
 
 
 */
