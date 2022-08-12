//
//  main.cpp
//  Lect-7 Subset Sum problem DP
//
//  Created by Himanshu Bairwa on 29/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 Question : Subset Sum Problem
 
 Link: https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
 
 code:
 
 

 class Solution{
 public:
     bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        bool t[n+1][sum+1];
        for(int i = 0 ; i<n+1; i++){
            t[i][0] = true;
        }
        for(int j = 1; j<sum+1; j++){
            t[0][j] = false;
        }
        
        for(int i = 1; i<n+1; i++){
            for(int j = 1; j<sum+1; j++){
                if(arr[i-1] <= sum){
                    t[i][j] = (t[i-1][j-arr[i-1]]) || (t[i-1][j]);
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        
        return t[n][sum];
     }
 };

 
 
 
 
 */
