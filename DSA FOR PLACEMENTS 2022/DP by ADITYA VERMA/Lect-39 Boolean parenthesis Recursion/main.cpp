//
//  main.cpp
//  Lect-39 Boolean parenthesis Recursion
//
//  Created by Himanshu Bairwa on 12/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION:  Evaluate Expression To True Boolean Parenthesization (RECURSION)
 
 LINK:  https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1
 
 CODE:
 
 

 class Solution{
 public:

     int solve(string str, int i, int j, int istrue)
     {
         if(i>j)return 0;
         if(i==j)
         {
              // if istrue==1 & str[i] ='T' it means we required a true and got it so return 1 else return 0
              // if istrue==0 & str[i] ='F' it means we required a false and got it so return 1 else return 0
              
             if(istrue)return str[i]=='T';
             else return str[i]=='F';
         }
         int ans=0;
         
         for(int k=i+1;k<=j-1;k=k+2)
         {
             int leftT=  solve(str,i,k-1,1);
             int leftF=  solve(str,i,k-1,0);
             int rightT= solve(str,k+1,j,1);
             int rightF= solve(str,k+1,j,0);
          
             if(str[k]=='^')
             {
                 if(istrue)
                 ans+=(leftT*rightF) + (leftF*rightT);
                 else ans+=(leftT*rightT) + (leftF*rightF) ;
             }
             else if(str[k]=='&')
             {
                 if(istrue)
                 ans+=(leftT*rightT);
                 else ans+=(leftT*rightF) + (leftF*rightT) + (leftF*rightF);
             }
             else if(str[k]=='|')
             {
                 if(istrue)
                 ans+=(leftT*rightF) + (leftF*rightT) + (leftT*rightT);
                 else ans+=(leftF*rightF) ;
             }
         }
         return ans;
     }
     
     int countWays(int N, string S){
         return solve(S,0,N-1,true);
     }
 };

 
 
 
 
 */
