//
//  main.cpp
//  Lect-43 Egg Dropping Problem Recursion
//
//  Created by Himanshu Bairwa on 13/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: EGG DROPPING PROBLEM
 
 LINK:  https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1
 
 
 CODE:
 

 class Solution
 {
     public:
     
     int solve(int e,int f){
         if(f == 0 || f == 1){
             return f;
         }
         
         if(e == 1){
             return f;
         }
         
         int mini = INT_MAX;
         for(int k = 1; k <= f; k++){
             
             int temp = 1 + max(solve(e-1,k-1) , solve(e,f-k));
             mini = min(mini,temp);
         }
         
         return mini;
     }
     
     
     
     //Function to find minimum number of attempts needed in
     //order to find the critical floor.
     int eggDrop(int n, int k)
     {
        return solve(n,k);
     }
 };

 
 */
