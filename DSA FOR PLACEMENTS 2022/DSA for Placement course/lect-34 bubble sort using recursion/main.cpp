//
//  main.cpp
//  lect-34 bubble sort using recursion
//
//  Created by Himanshu Bairwa on 19/06/22.
//

#include <iostream>
using namespace std;


//Bubble sort using Recursion

void BubbleSort(int arr[],int n){
    
    //base case
    if(n==0 || n==1){
        return;
    }
    // ek case khudse solve karo
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    
    // baki recusrsion sambhal lega
    
    //recursive call
    BubbleSort(arr, n-1);
    
    
}

int main() {
   
    int arr[6] = {2,1,6,2,6,8};
    
    BubbleSort(arr, 6);
    
    for(int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<< endl;
    
    
    
    
    return 0;
}
