//
//  main.cpp
//  Lect-44 Linked list and its types
//
//  Created by Himanshu Bairwa on 23/06/22.
//

#include <iostream>
#include <map>
using namespace std;

// Linked List node

class Node{
  
public:
    int data;
    Node* next;
    
    //Constructor
    
    Node(int data){
        this -> data = data;                    // jo node bani hai uska data input data lega
        this -> next = NULL;         // jo node ka next/ pointer hai vo next node ke address ko point karega
    }
    
    // Destructor
    ~Node(){
        int value = this -> data;
        
        //momory Free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
            
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
    
};

// Inserting new nodes to previos nodes or joining nodes

void insertionAtHead(Node* &head, int d){                   // Node* &head jo hai vo address ko point kar raha hai
    
    //Node creation at Head
    
    Node* temp = new Node(d);               // node created in heap memory
    temp -> next = head;        // head ke andar address hai
    head = temp;
    
}
    // Node creation at Tail
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;

}

    // Insetion of Node in middle at some position
void insertAtPosition(Node* &tail,Node* &head,int position, int d){
    
    if(position==1){
        insertionAtHead(head, d);
        return;
    }
    Node* temp = head;
    
    int cnt =1;
    
    while(cnt<position-1){
        
        temp = temp->next;
        cnt++;
   }
    
    //inserting at last position
    
    if(temp->next ==NULL){
        insertAtTail(tail, d);
        return;
    }
    
    Node* nodeToinsert = new Node(d);
    
    nodeToinsert -> next = temp -> next;
    
    temp -> next = nodeToinsert;
}




// Prinitg of linked list
void Print(Node* &head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return; 
    }
    Node* temp = head;
    
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void deleteNode(int position, Node* &head){
    
    // deleting first node
    if(position==1){
        Node* temp = head;
        head = head -> next;
        // memory free at start node
        temp -> next = NULL;
        delete temp;
        
    }else{
        // deleting any middle node oor last node
        
        Node* curr = head;
        Node* prev = NULL;
        
        int cnt =1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev -> next = curr -> next;
        delete curr;
    }
}

//CHECKIGN OF LOOP PRESENT IN LINKED LIST OR NOT
bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    
    map<Node*, bool> visited;
    
    Node* temp = head;
    
    while(temp != NULL){
        
        //cycle is present
        if(visited[temp] == true){
            cout<<"cycle is present in element "<< temp->data <<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
    
}


// FLOYD cycle DETECTION ALGO IMPLEMENTATION

Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    
    Node* fast = head;
    Node* slow = head;
    
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow =slow-> next;
        
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}



//FUCNTION TO FINDING STARTING NODE OF LOOP
Node* getIntersectionNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection  = floydDetectLoop(head);
    Node* slow = head;
    
    while(slow != intersection){
        slow = slow-> next;
        intersection = intersection->next;
        
        
    }
    return slow;
    
}

void removeLoop(Node* head){
    if(head==NULL){
        return;
    }
    Node* startOfLoop = getIntersectionNode(head);
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}


int main() {
   
    // heap me node ka object create karna
    
    Node* node1 = new Node(10);
//    cout<<"Node data: "<< node1 -> data <<endl;
//    cout<<"Next node address: "<< node1 -> nextNodeAddress <<endl;

    
    //head pointed to node 1
    Node* head = node1;
    
    // tail pointed to node 1
    Node* tail  = node1;
    
    
//    Print(head);            // printing of linked list
    
    //insert node
    insertAtTail(tail, 12);
//    Print(head);

    insertAtTail(tail, 15);
//    Print(head);
    
    insertAtTail(tail, 22);
    
//    insertAtPosition(tail,head,3,22);        // adding a new node to position 3
//    Print(head);
    
//    insertAtPosition(tail,head,1,69);        // adding a new node to position 1 or starting
//    Print(head);

//    insertAtPosition(tail, head, 4, 100);
//    Print(head);
    
//    cout<<"head "<<head->data<<endl;
//    cout<<"tail "<<tail->data<<endl;
    
//    deleteNode(1, head);
//    Print(head);

//    deleteNode(2, head);
    

    
    
    
    
    
    //    Just to make loop and check whether loop is present or not
     tail->next = head->next;
    
    if(floydDetectLoop(head) !=NULL){
        cout<<"Loop is present in Linked list"<<endl;
    }else{
        cout<<"Loop is not present in linked list"<<endl;
    }
    
    Node* loop  = getIntersectionNode(head);
    cout<<"loop starts at "<<loop->data<<endl;
    
    removeLoop(head);
    Print(head);
    
    
//    Print(head);

    
    return 0;
}
