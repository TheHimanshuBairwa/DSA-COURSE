//
//  main.cpp
//  lect-44 Doubly linked list
//
//  Created by Himanshu Bairwa on 23/06/22.
//

#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* prev;
    Node * next;
    
    //Constructor
    Node(int d){
        
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
        
    }
    
    // Destructor
    ~Node(){
        int val = this->data;
        if (next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
    
    
};

//Printing of linked list and traversing in linked list
void print(Node* head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }cout<<endl;
}


// finding length of linked list
int getLength(Node* head){
    int len= 0;
    Node* temp = head;
    
    while(temp != NULL){
        len++;
        temp = temp->next;
        
    }
    return len;
}



// insert at starting/Head

void insertAtHead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        
    }else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
        
    }
    
    
}

// insert at tail
void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
        
    }else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
        
    }
   
}

// insert at some position

void insertAtPosition(Node* &tail,Node* &head, int position, int d){
    //inserting at starting
    if(position==1){
        insertAtHead(head,tail, d);
        return;
    }
    
    // by using this we can traverse and reach to that node where we need to add node
    Node* temp = head;
    int cnt=1;
    
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    
    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,head, d);
        return;
    }
    
    //inserting not at some midway position
    Node* nodeToinsert = new Node(d);
    
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
    
}

void deleteNode(int position, Node* &head){
    
    //deleting first or start node
    
    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
        // deleting any middle node or last node
        
        Node* curr = head;
        Node* previ = NULL;
        
        int cnt =1;
        while(cnt<position){
            previ = curr;
            curr = curr->next;
            cnt++;
        }
       
        curr-> prev = NULL;
        previ->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}



int main() {
    
    Node* node1  = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    
    print(head);
//    cout<<getLength(head)<<endl;
    
    // inserting at head
    insertAtHead(head,tail, 11);
    print(head);
   
    insertAtHead(head,tail, 12);
    print(head);
    
    insertAtHead(head,tail, 13);
    print(head);
    
    insertAtTail(tail,head,25);
    print(head);
    
    insertAtPosition(tail,head,2,100);
    print(head);
    
    insertAtPosition(tail,head,1,101);
    print(head);
    
    insertAtPosition(tail,head,7,102);
    print(head);
    
    deleteNode(7,head);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    
    
    
    return 0;
}
