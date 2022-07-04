//
//  main.cpp
//  lect-33 binary search using recursion
//
//  Created by Himanshu Bairwa on 19/06/22.
//

#include <iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i =s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

// Q4 -> Binary Search using recursion

bool binarySearch(int *arr,int s,int e,int k){
    
    
    print(arr,s,e);
    
    // base case
    
    // element not found
    if(s>e){
        return false;
    }
    
   int  mid  = s + (e - s)/2;
    cout<<mid<<" -> "<<arr[mid]<<endl;
    // element found
    if(arr[mid]==k){
        return true;
    }
    
    if(arr[mid]<k){
        return binarySearch(arr, mid+1, e, k);
    }else{
        return binarySearch(arr, s, mid-1, k);
         
    }
}

int main() {
 
    int arr[14] = {2,4,6,10,14,18,22,24,26,999,1000,1500,2001,2022};
    int size = 14;
    int key = 2022;
    
    bool ans = binarySearch(arr,0 ,size-1, key);
    if(ans){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }





    return 0;
}
