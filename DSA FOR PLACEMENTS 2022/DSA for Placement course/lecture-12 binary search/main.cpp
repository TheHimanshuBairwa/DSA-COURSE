//
//  main.cpp
//  lecture-12 binary search
//
//  Created by Himanshu Bairwa on 06/06/22.
//

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    
    int start = 0;
    int end = size-1;
    
    int mid = start + (end-start)/2;
    
    while( start <= end){
        
        if(arr[mid] == key){
            return mid;
        }
        
        // go to right vala part
        if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
            
        }
    
        mid = start + (end-start)/2;
        
    }
    return -1;
}

int main() {
    
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};
    
    int index = binarySearch(odd ,5, 16);
    cout<<" index of 2 : "<< index<< endl;
    
    
    return 0;
}
