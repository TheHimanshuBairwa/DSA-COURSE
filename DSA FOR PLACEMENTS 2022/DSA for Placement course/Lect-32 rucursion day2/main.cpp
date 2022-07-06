//
//  main.cpp
//  lect-32 rucursion day2
//
//  Created by Himanshu Bairwa on 18/06/22.
//

#include <iostream>
using namespace std;

void reachHome(int src, int dest){
    
    cout<<"source "<<src<<" destination "<<dest<<endl;
    //base case
    if(src == dest){
        cout<<"pahoch gaya ghar"<<endl;
        return;
    }
    
    // processing -> ek step aage badhao
    src++;
    
    // recursive relation
    
    reachHome(src,dest);
}




// SAY DIGIT FUNCTION

void saydigit(int n, string arr[]){
    
    //base case
    if(n==0){
        return;
        
    }
    
    int digit = n%10;
    n = n/10;
    
    saydigit(n,arr);
    
    cout<<arr[digit]<<" ";
    
}









int main() {
   
    int dest = 10;
    int src = 1;
    cout<<endl;
//    reachHome(src,dest);
    
    
    
    // say Digit question
    int n;
    cin>>n;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<endl;
    saydigit(n,arr);
    cout<<endl;
    return 0;
}
