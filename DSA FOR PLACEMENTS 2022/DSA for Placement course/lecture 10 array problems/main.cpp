//
//  main.cpp
//  lecture 10 array problems
//
//  Created by Himanshu Bairwa on 04/06/22.
//

#include <iostream>
using namespace std;


void Printarray(int arr[],int n){
    
    for(int i=0; i<n; i++){
        
        cout<< arr[i] <<" ";
        
    } cout << endl;
    
}
/*
void swapAlternate(int arr[],int size){
    
    for(int i = 0; i<size; i+=2){
        if( i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void SWAP(int arr[], int length){
    int temp;
    for(int i = 0; i<length; i+=2){
            if( i+1 < length){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
        }
    }
}


int main() {
    
    // SWAPPING OF ALTERNATE VALUES IN ARRAY
    int even[8] = {3,4,5,2,7,6,9,11};
    int  odd[5] = {12,11,14,13,15};
    
//    swapAlternate(even,8);
//    Printarray(even,8);
    
//    swapAlternate(odd,5);
//    Printarray(odd,5);
    
    SWAP(even,8);
    Printarray(even, 8);
    
    */

void Sortzeroone(int arr[],int n){
    
    int i = 0;
    int j = n-1;
    
    while(i<j){
        if(arr[i]==0){
            i++;
            
        }else if(arr[j]==1){
            j--;
        }else if(arr[i]==1 && arr[j]==0){
            
            swap(arr[i],arr[j]);
            i++;
            j--;
            
        }else if(i>=j)
            break;
    }
    
}


int main(){
    int arr[8]= {1,1,0,0,0,0,1,0};
    Sortzeroone(arr,8);
    Printarray(arr,8);
    
    
    return 0;
}
