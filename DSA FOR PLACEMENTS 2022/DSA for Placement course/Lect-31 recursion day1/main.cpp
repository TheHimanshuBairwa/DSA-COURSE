//
//  main.cpp
//  lect-31 recursion day1
//
//  Created by Himanshu Bairwa on 18/06/22.
//


#include <iostream>
using namespace std;


int factorial(int n){
    
// base case
    if(n==0){
        return 1;
    }
    
    //chotti problem
    int smallerproblem = factorial(n-1);
    
    //baddi problem
    int biggerproblem = n * smallerproblem;

    return biggerproblem;
}

//optimised
int factorial1(int n){
    
// base case
    if(n==0){
        return 1;
    }
    
    return n * factorial(n-1);
}



// power of two function

int poweroftwo(int n){
    
    //base case
    if(n==0){
        return 1;
    }
    
    // recursive relation -> f(n) = 2 x f(n-1)
    
    int smallerproblem = poweroftwo(n-1);
    int biggerproblem = 2 * smallerproblem;
    
    
    return biggerproblem;
    
}


// print numbers
//tail recursion
void tail_recursion_printnumbers(int n){
    //base case
    if(n==0){
        return ;
        
    }
    
    cout<< n <<endl;
    
    //recursive relation
    
    tail_recursion_printnumbers(n-1);
}


//head recursion
void head_recursion_printnumbers(int n){
    //base case
    if(n==0){
        return ;
        
    }
    
    
    
    //recursive relation
    
    head_recursion_printnumbers(n-1);
    
    cout<< n <<endl;
}








int main() {
    
    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    
// factorial
    
//    cout<<"factorial of n is: "<<factorial1(n)<<endl;
    
   // POWER OF 2
    
//    cout<<" 2 ki power "<<n<<" is : "<<poweroftwo(n)<<endl;
    
    
    // counting of numbers
    cout<<endl;
    head_recursion_printnumbers(n);
    
    
    return 0;
}
