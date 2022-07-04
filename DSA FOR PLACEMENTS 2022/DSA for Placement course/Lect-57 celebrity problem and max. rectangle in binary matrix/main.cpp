//
//  main.cpp
//  Lect-57 celebrity problem and max. rectangle in binary matrix
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
 // QUESTION 1- CELEBRITY PROBLEM (GFG)
 
 class Solution
 {
     private:
      bool knows(vector<vector<int> >& M,int a,int b,int n){
          if(M[a][b] == 1){
              return true;
          }else
             return false;
      }
     
     
     public:
     //Function to find if there is a celebrity in the party or not.
     int celebrity(vector<vector<int> >& M, int n)
     {
        stack<int>s;
        
        // step 1: push all elements in stack
        for(int i =0; i<n; i++){
            s.push(i);
        }
        
        // step 2: take 2 elements and compare them
        
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n)){          //if a knows b
                s.push(b);
            }else{
                s.push(a);
            }
              
        }
        int ans = s.top();
        
        // step 3: single element in stack is potential celebrity
        // so verify it
        
        // check rows condition of all zero
        
        int zerocount =0;
        for(int i =0;i<n;i++){
            if(M[ans][i] ==0){
                zerocount++;
            }
        }
            //
            if(zerocount != n){
                return -1;
                }
            
       
            // check column that all are 1 except diagonal
            
            int onecount = 0;
            
           for(int i=0; i< n; i++){
               if(M[i][ans]==1){
                   onecount++;
               }
               
           }
               if(onecount != n-1){
                   return -1;
               }
               
              
               
          
           return ans;
     }
 };
 
 
 
 
 
 */




/*
 // MAXIMUM RECTANGLE ARE IN BINARY MATRIX WITHH ALL 1s
 
 class Solution{
   private:
   vector<int> nextsmallerelemnts(int *heights,int n) {
         stack<int> s;
         s.push(-1);
         vector<int> ans(n);

         for(int i=n-1; i>=0 ; i--) {
             int curr = heights[i];
             while(s.top() != -1 && heights[s.top()] >= curr)
             {
                 s.pop();
             }
             //ans is stack ka top
             ans[i] = s.top();
             s.push(i);
         }
         return ans;
     }
     
     vector<int> prevsmallerelements(int *heights,int n) {
         stack<int> s;
         s.push(-1);
         vector<int> ans(n);

         for(int i=0; i<n; i++) {
             int curr = heights[i];
             while(s.top() != -1 && heights[s.top()] >= curr)
             {
                 s.pop();
             }
             //ans is stack ka top
             ans[i] = s.top();
             s.push(i);
         }
         return ans;
     }
   
   
   int largestRectangleArea(int *heights,int n) {
     //   int n= heights.size();
         
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
     
      
   
   
   public:
     int maxArea(int M[MAX][MAX], int n, int m) {
         
         // compute for first row
         int area = largestRectangleArea(M[0],m);
         
         // for remaining rows
         for(int i=1;i<n;i++){
             for(int j =0;j<m;j++){
                  
                  //row update by adding it to previous row
                 if(M[i][j] != 0){
                     M[i][j] = M[i][j] + M[i-1][j];
                 }
                 else{
                     M[i][j] = 0;
                 }
             }
             // entire row is updated now
             area = max(area,largestRectangleArea(M[i],m));
         }
         return area;
        
     }
 };
 
 
 */
