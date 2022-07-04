//
//  main.cpp
//  lect-35 Merge Sort using Recursion
//
//  Created by Himanshu Bairwa on 19/06/22.
//

#include <iostream>
using namespace std;

//to merge two sorted arrays

void mergeArray(int *arr,int s,int e){
     
    int mid = s + (e-s)/2;
    
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    
    // copy values
    int mainArrayIndex = s;
    for(int i = 0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    
    mainArrayIndex = mid+1;
    for(int i =0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }
    
    
    // merge 2 sorted arrays
    
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    
    while(index1<len1 && index2<len2){
        
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }else{
            arr[mainArrayIndex++] = second[index2++];
        }
    
    }
    
    while(index1<len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    delete []first;
    delete []second;
}

// Merge sort

void mergeSort(int *arr,int s,int e){
    
    //base case
    if(s>=e){
        return;
    }
    
    int mid = s + (e-s)/2;
    //left part sort karna hai
    mergeSort(arr, s, mid);
    
    //right vala part sort karna hai
    mergeSort(arr,mid+1,e);
    
    
    // merge sorted arrays
    mergeArray(arr,s,e);
}



int main() {
    
    int arr[5] = {2,5,1,6,9};
    int n =5;
    
    mergeSort(arr,0,n-1);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    
    return 0;
}

// READ GFG ARTICLE IMPORTANT


// VERY IMPORTANT ARTICLE RELATED TO MERGE SORT APPLICATION

// Merge Sort is useful for sorting linked lists in O(nLogn) time. In the case of linked lists, the case is different mainly due to the difference in memory allocation of arrays and linked lists. Unlike arrays, linked list nodes may not be adjacent in memory. Unlike an array, in the linked list, we can insert items in the middle in O(1) extra space and O(1) time. Therefore, the merge operation of merge sort can be implemented without extra space for linked lists.

// In arrays, we can do random access as elements are contiguous in memory. Let us say we have an integer (4-byte) array A and let the address of A[0] be x then to access A[i], we can directly access the memory at (x + i*4). Unlike arrays, we can not do random access in the linked list. Quick Sort requires a lot of this kind of access. In a linked list to access i’th index, we have to travel each and every node from the head to i’th node as we don’t have a continuous block of memory. Therefore, the overhead increases for quicksort. Merge sort accesses data sequentially and the need of random access is low.
//Inversion Count Problem
//Used in External Sorting
