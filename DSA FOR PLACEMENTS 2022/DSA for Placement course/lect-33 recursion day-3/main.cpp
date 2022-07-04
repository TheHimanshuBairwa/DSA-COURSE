//
//  main.cpp
//  lect-33 recursion day-3 binary search
//
//  Created by Himanshu Bairwa on 19/06/22.
//

#include <iostream>
using namespace std;

//Q1->
// checking sorted array using recursion


bool isSorted( int *arr,int size){                  // we can write this also  bool isSorted( int arr[],int size)
    
    // base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
        
    }else{
        bool remainingpart = isSorted(arr+1,size-1);
        return remainingpart;
    }
}


//Q2-> return sum of array using recursion

int sumOfarray(int *arr,int size){
    
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    
    //recursive relation
    int remaining_part = sumOfarray(arr+1,size-1);
    int sum = arr[0]+ remaining_part ;
    
    return sum;
}


// Q3-> APPLY LINEAR SEARCH USING RECURSION

bool linearSearch(int *arr,int size,int k){
     
    //base case
    if(size==0){
        return false;
    }
    
    if(arr[0]==k){
        return true;

    }else{
        bool remaining_part = linearSearch(arr+1,size-1,k);
        return remaining_part;
    }
}


int main() {
    
    
    int arr[5] = {3,5,1,2,6};
    int size = 5;
//
//    bool ans = isSorted(arr,size);
//    if(ans){
//        cout<<"array is sorted "<<endl;
//    }else{
//        cout<<"array is not sorted "<<endl;
//    }
//
    
//    cout<<"sum of array is "<<sumOfarray(arr,size)<<endl;
//
    
    
    
    int key =6;
    bool ans = linearSearch(arr,size,key);
    
    if(ans){
        cout<<key<<" is present in array"<<endl;
    }else{
        cout<<key<<" is not present in array"<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
