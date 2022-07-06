//
//  main.cpp
//  lect-20/merge 2 sorted arrays
//
//  Created by Himanshu Bairwa on 13/06/22.
//

#include <iostream>
#include<vector>
using namespace std;


void merge(int arr1[],int n, int arr2[],int m,int arr3[]){
    
    
    int i = 0,j=0,k=0;
    
    //compare karke array values ko new array me put karna hai
    while(i<n && j<m){
        
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
            
        }else{
            arr3[k] = arr2[j];
            j++;
            k++;
            
        }
    }
    // agar 1st array ke no.of  elements 2nd array ke no. of elements se jyada hai to array1 ke bache huye no. of elements ko copy kardo array3 me
    while(i<n){
        arr3[k] = arr1[i];
        i++;
        k++;
        
    }
    // agar 2nd array ke no. of elements 1st array ke no. of elements se jyada hai to array2  ke bache huye no. of  elements ko copy kardo array3 me
    while(j<m){
        arr3[k] = arr2[j];
        j++;                // agar upar arr3[k++] = arr1[i++]; larne se i++,j++ ki zarurat nai padti
        k++;
    }
}

void print(int arr[],int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    
    }
}


int main() {
   
    
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};
    
    merge(arr1,5,arr2,3,arr3);
    
    print(arr3,8);
    cout<<endl;
    
    
    return 0;
}
