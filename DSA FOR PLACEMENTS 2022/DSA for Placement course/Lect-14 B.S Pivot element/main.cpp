//
//  main.cpp
//  lecture 14 B.S
//
//  Created by Himanshu Bairwa on 06/06/22.
//

#include <iostream>
using namespace std;

int Pivotele(int arr[],int n){
    int s=0;
    int e= n-1;
    int  mid = s+(e-s)/2;
    while(s<e){
        
        if(arr[mid]>=arr[0]){
            s = mid+1;
            
        }else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }return s;
}

int main(){
 
    int arr[5] = {11,12,13,14,15};
    cout<<"hi";
    int pivot = Pivotele(arr, 5);
    cout<<" pivot element is at index :"<<pivot<<endl;
    
    
    return 0;
}
