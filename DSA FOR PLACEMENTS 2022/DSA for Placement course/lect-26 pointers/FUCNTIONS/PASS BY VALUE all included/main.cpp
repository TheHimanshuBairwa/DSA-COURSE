//
//  main.cpp
//  lect-26 pointers/FUCNTIONS/PASS BY VALUE all included
//
//  Created by Himanshu Bairwa on 17/06/22.
//

#include <iostream>
using namespace std;


int getsum(int arr[],int n)     // int getsum(int *arr,int n) likhne me bi same hi hai beciz isme aaya pointer hi hai.

{
    int sum = 0;
    for(int i=0;i<n;i++){
//        sum = sum + arr[i];
         sum = sum + i[arr];
    }
    return sum;
}

int main() {
 
    int arr[6] = {1,2,3,4,5,8};
    cout<<"sum is "<<getsum(arr,6)<<endl;
    
    cout<<"sum of last three "<<getsum(arr+3,3)<<endl;
    
    
    
    
    
    return 0;
}
