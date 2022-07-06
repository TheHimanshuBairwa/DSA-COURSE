//
//  main.cpp
//  lect-44 Circular Linked List
//
//  Created by Himanshu Bairwa on 23/06/22.
//

#include <iostream>
using namespace std;

class Node{
    
public:
    int data;
    Node* next;
    
    // Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    
    // Destructor
    ~Node(){
        int val = this->data;
        if (this-> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
    
    
};

void insertNode(Node* &tail, int element, int d){
    // assuming that element is present in the list
    
    // 1> empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // 2> non empty list
        // assuming that element is present in the list
        Node* curr = tail;   // pointer created which is pointing tail
        
        while(curr->data != element){
            curr = curr->next;
        }
        
        // after while loop matlab element mil gaya and curr element vali node ko point kar raha hai
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
        
    }
    
}

void print(Node* &tail){
    Node* temp  =tail;
    
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
     
    // using do while loop   ----> isme jo do ke andar code hoga vo ek baar to execute hoga hi badme while me ghusega
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    
    cout<<endl;
}

// Deletion
void deleteNode(Node* &tail, int value){
    
    // empty list
    if(tail == NULL){
        cout<<" List is empty Please check again"<<endl;
        return;
    }else{
        // non empty list
        
        // assuming that value is present in the Linked List
        
        Node* prev = tail;
        Node* curr = prev->next;
        
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
            
        }
        prev->next = curr->next;
        
        // 1 node deleletion
        if(curr==prev){
            tail = NULL;
        }else if(tail == curr){
            tail = prev;
            
        }
        
        curr->next  =NULL;
        delete curr;
        
    }
    
}


bool checkCircular(Node* head){
    
    //empty lsit
    if(head == NULL){
        return true;
    }
    
    // 1 node case and more than 1 node case
    Node * temp = head->next;
    while(temp != NULL && temp != head) {
        temp  =temp -> next;
        
    }
    if(temp == head){
        return true;
        
    }else{
        return false;
    }
    
    
}





int main() {
   
    Node* tail = NULL;
    
    
    // empty list me jab insert kar rahe hai
    insertNode(tail,5,3);
    print(tail);
    
    insertNode(tail,3,5);
    print(tail);
    
    
    if(checkCircular(tail)){
        cout<<"linked list is circular"<<endl;
    }else{
        cout<<"linked list is not circular"<<endl;
    }
    cout<<checkCircular(tail)<<endl;
    
    
    
    
    
    
    
    
    /*
    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);
    
    insertNode(tail,5,6 );
    print(tail);
    
    insertNode(tail,9,10);
    print(tail);
    
    insertNode(tail,3,4);
    print(tail);
  
    deleteNode(tail,3);
    print(tail);
     */
    
    
    return 0;
}
