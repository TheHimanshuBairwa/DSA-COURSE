//
//  main.cpp
//  lect-25 Pointers
//
//  Created by Himanshu Bairwa on 15/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
    /*
    
    int num = 5;
  
    
    //address of operator
    
    cout<<" address of num: "<<&num<<endl;
    
    int *p = &num;
    cout<<"value of *p is: "<<*p<<endl;
    cout<<"value of p :"<<p<<endl;
    
    double d = 4.3;
    double *p2 = &d;
    
    cout<<"value of *p2 is: "<<*p2<<endl;
    cout<<"value of p2 :"<<p2<<endl;
    
    cout<<"size of integer "<<sizeof(num)<<endl;
    cout<<"size of pointer "<<sizeof(p)<<endl;
    
    cout<<"size of integer "<<sizeof(d)<<endl;
    cout<<"size of pointer "<<sizeof(p2)<<endl;
    
  
    
    
    
   // some more methods to use pointer
    
    
    
    int i = 5;
    int *q = &i;
    
    cout<<*q<<endl;
    cout<<q<<endl;
    
    int *p = 0;                 // we can use this also to point some address after declaring it as null pointer
    p = &i;
    
    cout<<*p<<endl;
    cout<<p<<endl;
    
    // checking values using incremental operator
    
    int num = 5;
    int a = num;
    cout<<"a before: "<<num<<endl;
    a++;
    cout<<"a  after: "<<num<<endl;
    
    cout<<"num:"<<num<<endl;
    cout<<"a:"<<a<<endl;
    
    int *p = &num;

    cout<<"before: "<<num<<endl;
    (*p)++;
    cout<<"after: "<<num<<endl;
    
    
    // COPYING A POINTER
    // *P --> MEANS VALUE
    // P --> ADDRESS
     
    int *q = p;
    
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;
    
    */
    
     //Pointer Arithmetic
    
    int i = 3;
    
    int *t = &i;
    
    *t = *t =1;
    cout<<*t<<endl;
    
    cout<<"t before :"<<t<<endl;
    t = t+1;
    cout<<"t after :"<<t<<endl;                     // integer takes 4 byte of address so when we add t= t+1 then it will go to next integer
                                                    // like if it is on 100 then after t+1 it will goto 104 
    
    
    
    
    
    
    
    
    
    return 0;
}
