//
//  main.cpp
//  lecture 15 BS continued
//
//  Created by Himanshu Bairwa on 08/06/22.
//

#include <iostream>
#include<vector>
using namespace std;


//Selection sort
void selectionSort(vector<int>& arr, int n)
{
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex])
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}
   


// Bubble sort

void bubbleSort(vector<int>& arr, int n)
{
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}



// Insertion sort

void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;
    }
}



int main() {



    cout<<"read from class notebook abd understand the concept "<<endl;
    return 0;
}
