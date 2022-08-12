//
//  main.cpp
//  Lect-8 Equal Sum Partition DP
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
 QUESTION: EQUAL SUBSET SUM
 
 LINK: https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1
 
 CODE:
 
 bool subsetSum(int n, int arr[], int sum){
          bool t[n+1][sum+1];
          for(int i = 0 ; i<n+1; i++){
             t[i][0] = true;
         }
         for(int j = 1; j<sum+1; j++){
             t[0][j] = false;
         }
         
         for(int i = 1; i<n+1; i++){
             for(int j = 1; j<sum+1; j++){
                 if(arr[i-1] <= i){
                     t[i][j] = (t[i-1][j-arr[i-1]]) || (t[i-1][j]);
                 }
                 else{
                     t[i][j] = t[i-1][j];
                 }
             }
         }
         
         return t[n][sum];
     }


     int equalPartition(int N, int arr[])
     {
         int sum = 0;
         for(int i = 0; i<N; i++){
             sum = sum + arr[i];
         }
         
         if(sum % 2 != 0){
             return false;
         }else if(sum % 2 == 0){
             return subsetSum(N,arr,sum/2);
         }
         return true;
     }
     
 };
 
 
 
 */
