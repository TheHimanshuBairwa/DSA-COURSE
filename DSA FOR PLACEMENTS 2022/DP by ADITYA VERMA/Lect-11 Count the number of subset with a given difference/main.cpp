//
//  main.cpp
//  Lect-11 Count the number of subset with a given difference
//
//  Created by Himanshu Bairwa on 01/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 
 ////// Same Probkem as Target Sum of Lect-12   ///////
 
 int subsetSum(int a[], int n, int sum)
 {
     // Initializing the matrix
     int dp[n + 1][sum + 1];
   // Initializing the first value of matrix
     dp[0][0] = 1;
     for (int i = 1; i <= sum; i++)
         dp[0][i] = 0;
     for (int i = 1; i <= n; i++)
         dp[i][0] = 1;
  
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= sum; j++)
         {
           // if the value is greater than the sum
             if (a[i - 1] <= j)
                 dp[i][j] = dp[i - 1][j] + dp[i - 1][j - a[i - 1]];
             else
                   dp[i][j] = dp[i - 1][j];
         }
     }

     return dp[n][sum];
 }

 int countWithGivenSum(int arr[ ], int n, int diff)
 {
      int sum=0;
     for(int i=0;i<n;i++)
          sum+=nums[i]
      
      int reqSum=(diff+sum)/2;
      return subsetSum(arr,n,reqSum);
 }
 
 
 */
