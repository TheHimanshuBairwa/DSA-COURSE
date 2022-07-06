//
//  main.cpp
//  lecture 13 binary search questions
//
//  Created by Himanshu Bairwa on 06/06/22.
//

#include <iostream>
using namespace std;


// FIRST OCCURENCE AND LAST OCCURRENCE AND TOTAL OCCURRENCE OF KEY ELEMENT IN ARRAY

int firstocc(int arr[],int size, int key){
    
    int s = 0;
    int e = size-1;
    int mid  = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        
        if(arr[mid]==key){
            ans = mid;
            e =mid -1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }else if(key < arr[mid]){
            e = mid-1;
        }
        mid  = s + (e-s)/2;
    }
   
    
    return ans;
}

int lastocc(int arr[],int size, int key){
    
    int s = 0;
    int e = size-1;
    int mid  = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }else if(key < arr[mid]){
            e = mid-1;
        }
        mid  = s + (e-s)/2;
    }
   
    
    return ans;
}

int main() {
    
    int odd[11] = {1,2,3,3,3,3,3,3,3,3,5};
    int firstindex = firstocc(odd,11,3);
    int lastindex = lastocc(odd,11,3);
    int totalocc =  lastocc(odd,11,3) - firstocc(odd,11,3) + 1;
    
    cout<< " first occurence of 3: "<< firstindex << endl;
    cout<< " last occurence of 3: "<< lastindex << endl;
    cout<<" total occurrence of key elec=ment 3 is : "<< totalocc << endl;
    
    return 0;
}




