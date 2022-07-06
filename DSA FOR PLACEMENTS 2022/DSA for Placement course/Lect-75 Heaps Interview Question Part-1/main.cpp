//
//  main.cpp
//  Lect-75 Heaps Interview Question Part-1
//
//  Created by Himanshu Bairwa on 06/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}



/*
 QUESTION 1: Kth SMALLEST ELEMENT
 
 LINK-->  https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1/#
 
 CODE-->
 
 int kthSmallest(int arr[], int l, int r, int k) {
         
         // Step 1: creation of max heap with first k elements
         priority_queue<int> pq;
         for(int i = 0; i < k; i++){
             pq.push(arr[i]);
         }
         
         // step 2: compare queue top element with remaining array elements
         for(int i = k; i <= r; i++){
             if(arr[i] < pq.top()){
                 pq.pop();
                 pq.push(arr[i]);
             }
         }
         
         // step 3: return the ans which the top of the queue
         int ans = pq.top();
         return ans;
     }
 };

 */


/*
QUESTION 2: IS BINARY TREE HEAP
 
 LINK-->  https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1#
 
 CODE-->
 
 class Solution {
   public:
     int countNodes(struct Node* tree){
         // base case
         if(tree == NULL){
             return 0;
         }
         int count = 1 + countNodes(tree->left) + countNodes(tree->right);
         return count;
         
     }
     
     bool isCBT(struct Node* tree, int index, int cnt){
         // base case
         if(tree == NULL){
             return true;
         }
         if(index >= cnt){
             return false;
         }
         else{
             bool left = isCBT(tree->left,2 * index + 1,cnt);
             bool right = isCBT(tree->right, 2* index + 2, cnt);
             return(left && right);
         }
     }
   
     bool isMaxOrder(struct Node* tree){
         // leaf node
         if(tree->left == NULL && tree->right == NULL){
             return true;
         }
         if(tree->right == NULL){
             return (tree->data > tree->left->data);
         }
         else{
             bool left = isMaxOrder(tree->left);
             bool right = isMaxOrder(tree->right);
             
             return(left && right && tree->data > tree->left->data
             && tree->data > tree->right->data);
         }
     }
   
     bool isHeap(struct Node* tree) {
        int index =0;
        int totalcount = countNodes(tree);
        
        if(isCBT(tree,index,totalcount) && isMaxOrder(tree)){
            return true;
        }else
        {
         return false;
        }
     }
 };
 */

/*
 QUESTION 3: MERGE TWO BINARY MAX HEAPS
 
 
 LINKS-->  https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1#
 
 
 CODE-->
 
 class Solution{
     public:
     
     
     // make zero based indexing
     void heapify(vector<int> &arr, int n, int i){
     
     int largest = i;
     int left = 2 * i + 1;
     int right = 2 * i + 2;
     
     if(left < n && arr[largest] < arr[left]){
         largest = left;
     }
     if(right < n && arr[largest] < arr[right]){
         largest = right;
     }
     
     if(largest != i){
         swap(arr[largest] , arr[i]);
         heapify(arr,n,largest);
     }
 }

     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
         //step 1: merge two arrays
         vector<int> ans;
         for(auto i:a){
             ans.push_back(i);
         }
         for(auto i:b){
             ans.push_back(i);
         }
         
         
         // step 2: build heap using merged arrays
         int size = ans.size();
         for(int i = size/2 - 1; i>=0; i--){
             heapify(ans,size,i);
         }
         
         return ans;
     }
 };
 
 
 */

/*
 QUESTION 4: MINIMUM COST OF ROPES
 
 LINK-->  https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
 
 CODE-->
 
 class Solution
 {
     public:
     //Function to return the minimum cost of connecting the ropes.
     long long minCost(long long arr[], long long n) {
         priority_queue<long long, vector<long long>,greater<long long> > pq;
         
         for(int i = 0;i <n ;i++){
             pq.push(arr[i]);
         }
         
         long long cost = 0;
         
         while(pq.size()>1){
             long long a = pq.top();
             pq.pop();
             
             long long b = pq.top();
             pq.pop();
             
             long long sum = a + b;
             cost += sum;
             
             pq.push(sum);
         }
         
         return cost;
     }
 };

 
 */


/*
 QUESTION 5: CONVERT BST INTO MIN HEAP
 
 
 LINK-->  https://www.geeksforgeeks.org/convert-bst-min-heap/
 
 CODEE-->
  DO BY OWN
 
 FOR REFERENCE
 
 
 void inorderTraversal(Node* root, vector<int>& arr)
 {
     if (root == NULL)
         return;
  
     // first recur on left subtree
     inorderTraversal(root->left, arr);
  
     // then copy the data of the node
     arr.push_back(root->data);
  
     // now recur for right subtree
     inorderTraversal(root->right, arr);
 }
  
 // function to convert the given BST to MIN HEAP
 // performs preorder traversal of the tree
 void BSTToMinHeap(Node* root, vector<int> arr, int* i)
 {
     if (root == NULL)
         return;
  
     // first copy data at index 'i' of 'arr' to
     // the node
     root->data = arr[++*i];
  
     // then recur on left subtree
     BSTToMinHeap(root->left, arr, i);
  
     // now recur on right subtree
     BSTToMinHeap(root->right, arr, i);
 }
  
 
 
 
 
 */
