//
//  main.cpp
//  Lect-77 Heap Interview Question Part-3
//
//  Created by Himanshu Bairwa on 07/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION 1: Smallest Range From K Sorted List
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/smallest-range-from-k-sorted-list_1069356
 
 
 CODE-->
 SOLVED BY USING APPROACH 3-> USING HEAPS
 
 #include <limits.h>
 #include <queue>

 class node{
   public:
     int data;
     int row;
     int col;
     
     node(int d, int row, int col){
         this->data = d;
         this->row = row;
         this->col = col;
         
     }
 };

 class compare{
   public:
     bool operator()(node* a, node* b){
         return a->data > b->data;
     }
     
 };

 int kSorted(vector<vector<int>> &a, int k, int n) {
     int mini = INT_MAX,maxi = INT_MIN;
     priority_queue<node*, vector<node*>, compare> minHeap;
     
     // step1: create a min heap for startinf element of each list and tracking min/max value
     for(int i = 0; i < k; i++){
         int element = a[i][0];
         mini = min(mini,element);
         maxi = max(maxi,element);
         minHeap.push(new node(element,i,0));
     }
     
     int start = mini,end = maxi;
     
     // processing range
     while(! minHeap.empty()){
         
         // fetch mini
         node* temp = minHeap.top();
         // min heap ke top me hamesha minimum element hoga jo range ko kam karne me help karega
         minHeap.pop();
         
         mini = temp->data;
         
         // range or answer updation
         if(maxi - mini < end - start){
             start = mini;
             end = maxi;
         }
         // check ki minimum vali list ka next element exist karta hai agar karta hai to update kardo
         
         
         // next elements exists
         if(temp->col+1 < n){
             maxi = max( maxi, a[temp->row][temp->col +1]);
             minHeap.push(new node(a[temp->row][temp->col+1], temp->row, temp->col + 1));
         }
         else{
             // next element does note exists
             break;
         }
           
     }
     // returning the difference of range values
     return (end - start + 1);
 }
 
 
 
 */


/*
 QUESTION 2:  MEDIAN IN A STREAM    ( V.V.VV.VV.IMP )
 
 
 LINK -->   https://www.codingninjas.com/codestudio/problems/median-in-a-stream_975268
 
 
 CODE --->
 
 #include<queue>

 int signum(int a,int b){
     if(a == b)
         return 0;
     else if(a>b)
         return 1;
     else
         return -1;
 }
 void call_median(int element,vector<int> &arr, priority_queue<int> &maxi,
               priority_queue<int,vector<int>,greater<int> > &mini, int &median  ){
     switch(signum(maxi.size(),mini.size())){
         case 0: if(element>median){
                     mini.push(element);
                     median = mini.top();
         }
             else{
                     maxi.push(element);
                     median =maxi.top();
             }
             break;
             
         case 1: if(element>median){
                     mini.push(element);
                     median = (mini.top() + maxi.top())/2;
                 }
             else {
                     mini.push(maxi.top());
                     maxi.pop();
                     maxi.push(element);
                     median = (mini.top() + maxi.top())/2;

             }
             break;
             
         case -1: if(element > median){
                    maxi.push(mini.top());
                    mini.pop();
                    mini.push(element);
                    median = (mini.top() + maxi.top())/2;
         }
             else{
                    maxi.push(element);
                    median = (mini.top() + maxi.top())/2;
             }
             break;
             
             
             
     }
     
     
     
 }
 vector<int> findMedian(vector<int> &arr, int n){

     vector<int> ans;
     priority_queue<int> maxheap;
     priority_queue<int,vector<int>,greater<int> > minheap;
     int median = -1;
     for(int i = 0; i<n; i++) {

         call_median(arr[i],arr,maxheap,minheap,median);
         ans.push_back(median);
     }
     return ans;
 }
 
 
 
 
 
 */
