//
//  main.cpp
//  Lect-40 Boolean Parenthesis Memosized
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
 
 QUESTION:  Evaluate Expression To True Boolean Parenthesization (MEMOIZED)
 
 LINK:  https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1
 
 CODE:
 
 unordered_map<string, int> dp ;
int countWays(int N, string S){
  
  return helper(S, 0 , S.size()-1, 'T') ;
  
}

int n_ways(int rt, int rf,int lt, int lf ,char sign, char reqBool)
{
    int temp = 0;
    
    if(sign=='|')
    {
        if(reqBool=='T')
         { temp+= lt*rt + lf*rt + lt*rf ;  }
        else temp+= lf*rf ;
    }
    else if(sign=='&')
    {
        if(reqBool=='T')
           temp+= rt*lt ;
        else
            temp+= lt*rf + lf*rt + lf*rf ;
    }
    else if(sign=='^')
    {
        if(reqBool=='T')
           temp+= lf*rt + lt*rf ;
        else temp+= lf*rf + lt*rt ;
    }
    
    // else temp+=100 ;
    
    return temp ;
}

int helper(string s, int i, int j,char reqBool)
{
    if(i>j) return 0 ;
    else if(i==j) return reqBool==s[i] ;
    
    string key = to_string(i) + "" + to_string(j) + " " + reqBool ;
    if(dp.find(key)!=dp.end()) return dp[key] ;
    
    int temp= 0 ;
    for( int k=i+1;k<=j-1;k+=2 )
    {
        int rt = helper(s,k+1,j,'T' ) ;
        int rf = helper(s,k+1,j,'F' ) ;
        int lt = helper(s,i,k-1,'T')  ;
        int lf = helper(s,i,k-1,'F')  ;
        
      //  cout<<s[k] ;
        temp += n_ways(rt,rf,lt,lf, s[k] , reqBool) ;
    }
    
    return dp[key] = temp%1003 ;
}
 
 */


/*
 
 USING 3D DP ARRAY
 
 
 int solve(string str, int i, int j, int istrue)
 {
     if(i>j)return 0;
     if(i==j)
     {
         if(istrue)return str[i]=='T';
         else return str[i]=='F';
     }
     if(dp[i][j][istrue]!=-1)
     return dp[i][j][istrue];
     
     int ans=0;
     
     for(int k=i+1;k<=j-1;k=k+2)
     {
         int leftT,leftF,rightT,rightF;
         
         if(dp[i][k-1][1]==-1)
         leftT=solve(str,i,k-1,1);
         else leftT=dp[i][k-1][1];
         
         if(dp[i][k-1][0]==-1)
         leftF=solve(str,i,k-1,0);
         else leftF=dp[i][k-1][0];
         
         if(dp[k+1][j][1]==-1)
         rightT=solve(str,k+1,j,1);
         else rightT=dp[k+1][j][1];
         
         if(dp[k+1][j][0]==-1)
         rightF=solve(str,k+1,j,0);
         else rightF=dp[k+1][j][0];
         
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
         dp[i][j][istrue]=ans%1003;
     }
     return ans%1003;
 }
 int countWays(int N, string S){
     
     memset(dp,-1,sizeof(dp));;
     return solve(S,0,N-1,1);
 }
 
 
 
 
 */
