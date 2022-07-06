//
//  main.cpp
//  lect-34 recursion day-4 recursion with strings
//
//  Created by Himanshu Bairwa on 19/06/22.
//

#include <iostream>
using namespace std;

// Q1--> Reversing of string using recursion

void reverse(string& s,int i,int j){
    
//    cout<<"call recieved for "<<s<<endl;
    // base case
    
    if(i>j){
        return;
    }
    
    // Recursive call
    
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}


// Q2--> CHECK WHETHER STRING IS PALINDROME OR NOT

bool checkPalindrome(string str,int i,int j){
    
    //base case
    if(i>j){
        return true ;
    }
    
   
    if(str[i] != str[j]){
        return false;
        
    }else{
        // recursive call
        return checkPalindrome(str, i+1, j-1);
        
    }
}



// Q3--> find power a to the b (exponent)

int power(int a, int b){
    
    // base case
    if(b==0){
        return 1;
        
    }
    if(b==1){
        return a;
        
    }
    // Recursive call
    int ans = power(a,b/2);
    
    if(b%2==0){
        //a is even
        return ans*ans;
    }else
        //a is odd
        return a * ans *ans;
    
    
}
















int main() {
    
//    string str = "abbccbba";
//
//    reverse(str,0,str.length()-1);
//    cout<<endl;
////    cout<<str<<endl<<endl;
//
//
//    bool isPalindrome = checkPalindrome(str,0,str.length()-1);
//    if(isPalindrome){
//        cout<<"string is palindrome "<<endl;
//    }else{
//        cout<<"string is not palindrome "<<endl;
//    }

    
    int a,b;
    cin>>a>>b;
    
    int ans  = power(a,b);
    cout<<"ans is "<<ans<<endl;
    

    return 0;
}
