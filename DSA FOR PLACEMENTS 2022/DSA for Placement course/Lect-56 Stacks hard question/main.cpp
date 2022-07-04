//
//  main.cpp
//  Lect-56 Stacks hard question
//
//  Created by Himanshu Bairwa on 27/06/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 
 //QUESTION 1 NEXT SMALLER ELEMENT (CODE STUDIO)
 
 #include<stack>
 vector<int> nextSmallerElement(vector<int> &arr, int n)
 {
     stack<int> s;
     s.push(-1);
     vector<int> ans(n);
     
     for(int i=n-1;i>=0;i--){
         int curr = arr[i];
             while(s.top() >= curr){
                 s.pop();
             }
         // asnwer s stack ka top
         ans[i] = s.top();
         s.push(curr);
     }
     
        return ans;
     
 }
 */

/*
 QUESTION 2--> LARGEST RECTANGULAR AREA IN HISTOGRAM
 class Solution {
 private:
    vector<int> nextsmallerelemnts(vector<int> arr, int n) {
         stack<int> s;
         s.push(-1);
         vector<int> ans(n);

         for(int i=n-1; i>=0 ; i--) {
             int curr = arr[i];
             while(s.top() != -1 && arr[s.top()] >= curr)
             {
                 s.pop();
             }
             //ans is stack ka top
             ans[i] = s.top();
             s.push(i);
         }
         return ans;
     }
     
    vector<int> prevsmallerelements(vector<int> arr, int n) {
         stack<int> s;
         s.push(-1);
         vector<int> ans(n);

         for(int i=0; i<n; i++) {
             int curr = arr[i];
             while(s.top() != -1 && arr[s.top()] >= curr)
             {
                 s.pop();
             }
             //ans is stack ka top
             ans[i] = s.top();
             s.push(i);
         }
         return ans;
     }
     
     
 public:
     int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();
         
         vector<int> next(n);
         next = nextsmallerelemnts(heights, n);
             
         vector<int> prev(n);
         prev = prevsmallerelements(heights, n);
         
         int area = INT_MIN;
         for(int i=0; i<n; i++) {
             int l = heights[i];
             
             if(next[i] == -1) {
                 next[i] = n;
             }
              int b = next[i] - prev[i] - 1;
             int newArea = l*b;
             area = max(area, newArea);
         }
         return area;
     }
 };
 
 
 
 */
