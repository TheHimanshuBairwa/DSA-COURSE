//
//  main.cpp
//  Lect-76 Heaps Interview Question Part-2
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
 QUESTION 1: K-th LARGEST SUM OF SUBARRAY
 
 LINK--> https://www.codingninjas.com/codestudio/problems/k-th-largest-sum-contiguous-subarray_920398
 
 
 CODE-->
 
 brute force method
 APPROACH 1:
 
 #include <algorithm>
 int getKthLargest(vector<int> &arr, int k)
 {
     vector<int> sumStore;
     int n = arr.size();
     for(int i = 0;i < n; i++){
         int sum = 0;
          
         for(int j = i; j<n ; j++) {
             sum += arr[j];
             sumStore.push_back(sum);
         }
     }
     
     sort(sumStore.begin(),sumStore.end());
     
     return sumStore[sumStore.size()-k];
 }
 
 
 APPROACH 2: using min heap
 
 
 #include<queue>
 int getKthLargest(vector<int> &arr, int k)
 {
     priority_queue<int, vector<int> , greater<int> > mini;
     int n = arr.size();
     for(int i =0; i< n; i++){
         int sum = 0;
         for(int j = i; j<n; j++){
              sum += arr[j];
             if(mini.size() < k){
                 mini.push(sum);
             }
             else{
                 if(mini.top() < sum){
                     mini.pop();
                     mini.push(sum);
                 }
             }
         }
     }
     
     return mini.top();
 }
 
 */




/*
QUESTION 2: MERGE K SORTED ARRAYS ------- V  V V V IMP
 
 
LINK-->  https://www.codingninjas.com/codestudio/problems/merge-k-sorted-arrays_975379?leftPanelTab=0
 
 
 CODE-->
 
 #include<queue>

 class node{
     public:
         int data;
         int i;
         int j;
     
     // constructor
     node(int data, int row, int col){
         this->data = data;
         i = row;
         j = col;
     }
     
 };

 class compare{
     public:
         bool operator()(node* a, node* b){
             return a->data > b->data;
         }
     
 };

 vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
 {
     priority_queue<node*, vector<node*>, compare> minHeap;
     
     // step 1: sare array ke first element ko insert kardo
     for(int i = 0; i < k; i++){
         node* tmp = new node(kArrays[i][0], i ,0);
         minHeap.push(tmp);
     }
     
     vector<int> ans;
     
     // step 2:
     while(minHeap.size() > 0){
         node* temp = minHeap.top();
         
         ans.push_back(temp->data);
         minHeap.pop();
         
         int i = temp->i;
         int j = temp->j;
         
         if(j+1 < kArrays[i].size()){
             node* next = new node(kArrays[i][j+1],i,j+1);
             minHeap.push(next);
         }
     }
     return ans;
 }

 
 */




/*
 QUESTION 3: MERGE K SORTED LINKED LIST------- V V V V IMP

 
 LINK-->  https://www.codingninjas.com/codestudio/problems/merge-k-sorted-lists_992772
 
 CODE-->
 Approach 2
 
 
 #include<queue>
 class compare{
   public:
     bool operator()(Node<int>* a,Node<int>* b){
         return a->data > b-> data;
     }
 };
 Node<int>* mergeKLists(vector<Node<int>*> &listArray)
 {
     priority_queue<Node<int>*,vector<Node<int>*>,compare > minHeap;
     
     int k = listArray.size();
     
     if(k == 0)
         return NULL;
     
     
     
     //step1:
     for(int i = 0; i< k; i++){
         if(listArray[i] != NULL){
             minHeap.push(listArray[i]);
         }
     }
     
     Node<int>* head = NULL;
     Node<int>* tail = NULL;
     
     while(minHeap.size() > 0) {
         Node<int>* top = minHeap.top();
         minHeap.pop();
         
         if(top->next != NULL){
             minHeap.push(top->next);
         }
         
         if(head == NULL){
             // linked list was empty
             head = top;
             tail = top;
            
         }
         else{
             // insert at end
             
             tail-> next = top;
             tail = top;
             
         }
         
     }
         return head;
     
     
     
 }

 
 
 
 
 
 
 */
