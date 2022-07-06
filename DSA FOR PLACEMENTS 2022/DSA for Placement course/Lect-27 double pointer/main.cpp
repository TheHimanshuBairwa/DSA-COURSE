//
//  main.cpp
//  lect-27 double pointer
//
//  Created by Himanshu Bairwa on 17/06/22.
//

#include <iostream>
using namespace std;


void update (int **ptr2){
 //   ptr = ptr2+1;
// kuch change hoga-- nai hua
    
 //  *ptr2= *ptr2+1;
// kuch change hoga--> ptr ka andar jo value thi vo change hui
    
    **ptr2 = **ptr2+1;
// kuch change hoga --> i ki value change ho gayi
    
    
}

int main() {
  
  /*
    int i =5;
    int *ptr = &i;
    int **ptr2 = &ptr;
   
//    cout<<"sab kuch sahi chal raha hai"<<endl;
//
//    cout<<"printing ptr ke andar jo address hai "<<ptr<<endl;
//    cout<<"address of ptr "<<&ptr<<endl;
//    cout<<"*ptr2: "<<*ptr2<<endl;
//
//    //printing i value
//
//    cout<<i<<endl;
//    cout<<*ptr<<endl;
//    cout<<**ptr2<<endl;
//
//    //printing address of i
//
//    cout<<&i<<endl;
//    cout<<ptr<<endl;
//    cout<<*ptr2<<endl;
//
//    // printing ptr ka address
//
//    cout<<&ptr<<endl;
//    cout<<ptr2<<endl;
//
//
    
    
    
    
    //DOUBLE POINTERS IN FUNCTIONS
     
    cout<<"before "<<i<<endl;
    cout<<"before "<<ptr<<endl;
    cout<<"before "<<ptr2<<endl;
    
    update(ptr2);
    cout<<endl;
    cout<<"after "<<i<<endl;
    cout<<"after "<<ptr<<endl;
    cout<<"after "<<ptr2<<endl;
    
    
    
    
    */
    
    // MCQ SOLVING OF POINTERS
    
    // read class notebook for question and also go through pointers question ok code studio/coding ninjas
    
    
    
    
    
    
    return 0;
}
