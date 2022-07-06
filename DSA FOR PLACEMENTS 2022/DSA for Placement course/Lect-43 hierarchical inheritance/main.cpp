//
//  main.cpp
//  lect-43 hierarchical inheritance
//
//  Created by Himanshu Bairwa on 22/06/22.
//

#include <iostream>
using namespace std;

class A{
  
public:
    void func1(){
        cout<<"inside function 1 "<<endl;
    }
};

class B: public A{
  
public:
    void func2(){
        cout<<"inside function 2 "<<endl;
    }
    
};

class C: public A{
  
public:
    void func3(){
        cout<<"inside function 3 "<<endl;
    }
    
};

int main() {
    
    B obj1;
    C obj2;
    
    obj1.func1();
    obj1.func2();
    
    obj2.func1();
    obj2.func3(); 
    
    return 0;
}
