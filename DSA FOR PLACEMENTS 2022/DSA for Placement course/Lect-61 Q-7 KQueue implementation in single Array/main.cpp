//
//  main.cpp
//  Lect-61 Q-7 KQueue implementation in single Array
//
//  Created by Himanshu Bairwa on 29/06/22.
//

#include <iostream>
using namespace std;

class KQueue{
    
public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freespot;
    int *next;
    
    
public:
    //Constructor
    KQueue(int n,int k){
        
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for(int i=0;i<k;i++){
            front[i]=-1;
            rear[i] = -1;
            
        }
        
        next = new int[n];
        for(int i=0;i<n;i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
        
        arr = new int[n];
        freespot = 0;
        
    }
    
    
    // push operation
    void enqueue(int data,int qn){
        //overfow condition check
        if(freespot ==-1){
            cout<<"No empty space is available"<<endl;
            return;
        }
        
        //find first free index
        int index = freespot;
        
        //update freespot
        freespot = next[index];
        
        //check whether first index
        if(front[qn-1]==-1){            // zero based indexing ke vajag se q1 = 0 hai so qn-1 karne se zero par jaa sakte h
            front[qn-1] = index;
            
        }else{
             // link new element to previous element
            next[rear[qn-1]] = index;
            
        }
        
        //update next
        next[index] = -1;
        
        //update rear or pointing rear to index
        rear[qn-1] = index;
        
        //pushing the value
        arr[index] = data;
        
    }
    
    int dequeue(int qn){           // pop operation
        
        //un derflow condition check
        if(front[qn-1]==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        
        // find index
        int index = front[qn-1];
        
        //front ko aage badaao
        front[qn-1] = next[index];
        
        //manange freespot
        next[index] = freespot;
        freespot = index;
        
        // returning popped data
        return arr[index];
    }
    
    
};

int main() {
     
    KQueue q(10,3);
    q.enqueue(10, 1);
    q.enqueue(20, 1);
    q.enqueue(30, 2);
    q.enqueue(40, 3);
    q.enqueue(50, 2);
    q.enqueue(60, 3);
    
       cout << q.dequeue(1) << endl;
       cout << q.dequeue(2) << endl;
       cout << q.dequeue(1) << endl;
       cout << q.dequeue(1) << endl;

    
    
    
    return 0;
}
