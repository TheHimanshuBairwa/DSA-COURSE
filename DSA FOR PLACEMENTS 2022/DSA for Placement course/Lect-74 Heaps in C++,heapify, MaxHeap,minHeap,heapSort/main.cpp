//
//  main.cpp
//  Lect-74 Heaps in C++
//
//  Created by Himanshu Bairwa on 04/07/22.
//

#include <iostream>
#include <queue>
using namespace std;

class heap{
public:
    int arr[100];
    int size;
    
    
    // constructor
    heap(){
        arr[0] = -1;
        size = 0;
    }
    
    
    
    //funtion to insert node in heap
    void insertionMaxHeap(int val){
        size = size+1;
        int index  = size;
        arr[index] = val;
        
        while(index>1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    
    
    void print(){
        for(int i = 1; i <= size; i++){
            cout<<arr[i]<<" ";
            
        }cout<<endl;
    }
    
    // Function to delete root node from heap
    void deletefromHeap(){  // deletion from root node
        
        if(size == 0){
            cout<<"there is nothing to delete"<<endl;
            return;
        }
        
        // step 1: put last element into first index
        arr[1] = arr[size];
        
        //step 2: remove last element
        size--;
        
        
        //step 3: take root node to its correct postion
        int i = 1;
        while(i<size){
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            
            if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            }
            else if( rightindex < size && arr[i] < arr[rightindex]){
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else{
                return;
            }
        }
     }
};

// function to move any ith index element to its correct positon (very important algo for interview)
// based on one based indexing
void heapify(int arr[], int n, int i){
    
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    
    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[largest] , arr[i]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[],int n){
    
    int size = n;
    
    while(size>1){
        //step 1: swap root node or first element with last element
        swap(arr[size],arr[1]);
        size--;
        
        // step 2 apply heap sort for placing root element at its correct postion
        heapify(arr,size,1);
    }
}

int main() {
   
    heap h1;
    h1.insertionMaxHeap(50);
    h1.insertionMaxHeap(55);
    h1.insertionMaxHeap(53);
    h1.insertionMaxHeap(52);
    h1.insertionMaxHeap(54);
    
    h1.print();
    
    h1.deletefromHeap();
    
    h1.print();
    
   
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    
    // heap creation
    for(int i = n/2; i > 0; i--){
        heapify(arr, n, i);
    }
    
    cout<< "printing the array now: "<<endl;
    for(int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    
    //heap Sort
     heapSort(arr, n);
    
    //print
    cout<< "printing the sorted array now: "<<endl;
    for(int i = 1 ; i <= n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    
    cout<<endl;
    
    
    
    
    
    
    // By using Priority Queue we perform Heap operation
    cout<<"using priority queue for Heap"<<endl;
   
    
    // MAX HEAP
    priority_queue<int> pq;
    
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    
    cout<<"top element of Max Heap: " << pq.top()<<endl;
    pq.pop();
    cout<<"top element of Max Heap: " << pq.top()<<endl;
    cout<<"size of max heap is: "<<pq.size()<<endl;
    
    if(pq.empty()){
        cout<<"Max Heap is empty"<<endl;
    }
    else{
        cout<<"Max Heap is not empty"<<endl;
    }
    
   
    cout<<endl;
   // MIN HEAP
    cout<<"Min Heap using Priority Queue"<<endl;
    
    priority_queue<int, vector<int>, greater<int> > minHeap;
    
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);
    
    cout<<"top element of Min Heap: " << minHeap.top()<<endl;
    minHeap.pop();
    cout<<"top element of Min Heap: " << minHeap.top()<<endl;
    cout<<"size of Min Heap is: "<<minHeap.size()<<endl;
    
    if(minHeap.empty()){
        cout<<"Min Heap is empty"<<endl;
    }
    else{
        cout<<"Min Heap is not empty"<<endl;
    }
    return 0;
}




/*
 QUESTION: BUILD MIN HEAP
 
 LINK---> https://www.codingninjas.com/codestudio/problems/build-min-heap_1171167?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
 
 
 CODE-->
 
 void heapify(vector<int> &arr, int n, int i){
     
     int smallest = i;
     int left = 2 * i + 1;
     int right = 2 * i + 2;
     
     if(left < n && arr[smallest] > arr[left]){
         smallest = left;
     }
     if(right < n && arr[smallest] > arr[right]){
         smallest = right;
     }
     
     if(smallest != i){
         swap(arr[smallest] , arr[i]);
         heapify(arr,n,smallest);
     }
 }





 vector<int> buildMinHeap(vector<int> &arr)
 {
     int n = arr.size();
     for(int i = n/2-1 ; i >= 0 ; i--){
         heapify(arr,n,i);
     }
     return arr;
 }

 */
