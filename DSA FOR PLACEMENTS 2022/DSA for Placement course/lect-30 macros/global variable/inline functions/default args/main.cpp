//
//  main.cpp
//  lect-30 macros/global variable/inline functions/default args
//
//  Created by Himanshu Bairwa on 18/06/22.
//

#include <iostream>
using namespace std;

// define a MACROS

//#define PI 3.14

int score =15;  // GLOBAL VARIABLE DEFINED


void b(int& i){         // pass by reference method is used to share memory and dont create new memory block
    cout<<i<<endl;
    cout<<"score2: "<<score<<endl;
    
}

void a(int& i){
    cout<<i<<endl;
    score++;
    cout<<"score1: "<<score<<endl;
    b(i);
    
}




int main() {
 
    /*
 //MACROS
    
//    double pi = 3.14;
    int r =5;
//    double area = pi * r * r;
    
    double area = PI * r * r;
    cout<<"area is: "<<area<<endl;

*/
    
    int i=5;
    a(i);
    cout<<"score3: "<<score<<endl;
    
    
    return 0;
}
