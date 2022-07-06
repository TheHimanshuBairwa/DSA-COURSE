//
//  main.cpp
//  lecture 13 peak in moutain question
//
//  Created by Himanshu Bairwa on 06/06/22.
//

#include <iostream>
using namespace std;

int mountainPeak(int arr[],int size){
    
    int start = 0;
    int end  =size-1;
    int mid = start + (end - start)/2;
//    int ans = -1;
    while(start<end){
    
            if(arr[mid] < arr[mid+1]){
            start = mid + 1;
            
            
        }else {
            
            end = mid;
        }
        mid = start + (end - start)/2;
    }return mid;
    
    
}





int main(){
    
    
    int arr[10] = {1,2,3,4,5,99,43,22,11,7};
    cout<<"hi";
    int peak = mountainPeak(arr,10);
    cout<<"hihi";
    cout<<" peak in the array moutain is :" << arr[peak] <<endl;
    cout<<" peak in the array moutain is at index :" << peak <<endl;
    
    
    
    
    return 0;
    
}
