//
//  main.cpp
//  Lect-65 Binary Tree FAANG Question Part-3
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
 QUESTION 1--> Sum of the Longest Bloodline of a Tree (Sum of nodes on the longest path from root to leaf node)
 
 LINK--> https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1
 
 CODE-->
 
 class Solution
 {
 public:
     void solve(Node* root, int sum,int &maxSum, int len, int &maxlen){
         
         // base case
         if(root==NULL){
              
              if(len > maxlen){
                  
                 maxlen = len;
                 maxSum = sum;
              }
              else if(len == maxlen){
                  maxSum = max(sum,maxSum);
              }
              return;
         }
         
         sum = sum + root->data;
         
         // recursive call for left and  right
         solve(root->left,sum,maxSum,len+1,maxlen);
         solve(root->right,sum,maxSum,len+1,maxlen);
         
     }
     
     
     
     int sumOfLongRootToLeafPath(Node *root)
     {
         int len = 0;
         int maxlen = 0;
         int sum = 0;
         int maxSum = INT_MIN;
         
         solve(root,sum,maxSum,len,maxlen);
         return maxSum;
         
         
     }
 };
 
 */

/*
 QUESTION 2--> Lowest Common Ancestor in a Binary Tree
 
 LINK -->  https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
 
 CODE-->
 
 class Solution
 {
     public:
     //Function to return the lowest common ancestor in a Binary Tree.
     Node* lca(Node* root ,int n1 ,int n2 )
     {
        // BASE CASE
        if(root == NULL){
            return NULL;
        }
        if(root->data == n1 || root->data == n2){
            return root;
        }
        
        Node* leftAns = lca(root->left,n1,n2);
        Node*rightAns =  lca(root->right,n1,n2);
        
        if(leftAns != NULL && rightAns !=NULL){
            return root;
        }else if(leftAns != NULL && rightAns == NULL) {
            return leftAns;
        }else if(leftAns == NULL && rightAns != NULL){
            return rightAns;
        }
        else{
            return NULL;
        }
        
        
     }
 };
 
 */

/*
 QUESTION 3--> K SUM PATHS IN BINARY TREES
 
 LINK-->   https://practice.geeksforgeeks.org/problems/k-sum-paths/1/#
 
 CODE-->
 
 
 class Solution{
     
   public:
   
   void solve(Node* root, int k,int &count,vector<int> path){
       // base case
       if(root==NULL){
           return ;
       }
       
       path.push_back(root->data);
       
       // left recursive call
 
       solve(root->left,k,count,path);
       //right recursive call
 
       solve(root->right,k,count,path);
       
       //check for K sum
 
       int size = path.size();
       int sum = 0;
       for(int i =size-1;i>=0;i--){
           sum += path[i];
           if(sum == k){
               count++;
           }
          
       }
        path.pop_back();
       
   }
     int sumK(Node *root,int k)
     {
         vector<int> path;
         int count= 0;
         
         solve(root,k,count,path);
         return count;
     }
 };
 
 
 
 */




/*
 QUESTION 4--> Kth Ancestor in a Tree
 
 LINK-->  https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1/
 
 CODE-->
 
 Node* solve(Node* root,int &k,int node){
     // base case
     if(root == NULL){
         return NULL;
     }
     
     if(root->data == node){
         return root;
     }
     
     Node* leftAns = solve(root->left,k,node);
     Node* rightAns = solve(root->right,k,node);
     
     // vapas aate time
     if(leftAns != NULL && rightAns == NULL){
         k--;
         if(k<=0){
             // asnwer lock
             k = INT_MAX;
             return root;
         }
         return leftAns;
     }
     
      if(leftAns == NULL && rightAns != NULL){
         k--;
         if(k<=0){
             // asnwer lock
             k = INT_MAX;
             return root;
         }
         return rightAns;
     }
     
     return NULL;
     
     
 }


 int kthAncestor(Node *root, int k, int node)
 {
    Node* ans = solve(root,k,node);
    if(ans == NULL || ans->data == node){
        return -1;
    }else
         return ans->data;
 }


 */


/*
 QUESTION 5--> MAXIMUM SUM OF NON ADJACENT NODES
 
 LINK--> https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1/
 
 CODE-->
 
 class Solution{
   public:
     //Function to return the maximum sum of non-adjacent nodes.
    
    pair<int,int> solve(Node* root){
        // base case
        
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
            
        }
        
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        
        pair<int,int> res;
        
        res.first = root->data + left.second + right.second;
        res.second = max(left.first,left.second) + max(right.first,right.second);
        
        return res;
        
    }
    
    
    
     int getMaxSum(Node *root)
     {
        pair<int,int> ans = solve(root);
        return max(ans.first,ans.second);
     }
 };
 
 
 
 */
