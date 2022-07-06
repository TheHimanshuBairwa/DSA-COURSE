//
//  main.cpp
//  lect-43 Polymorphism
//
//  Created by Himanshu Bairwa on 22/06/22.
//

#include <iostream>
using namespace std;


class A{
  // function overloading
public:
    void sayhello(){
        cout<<"hello "<<endl;
    }
    
    int sayhello(string name,int n){
        cout<<"hello "<<n<<endl;
        return n;
    }
    void sayhello(string name){
        cout<<"hello "<<name<<endl;
    }
    
    
};


//opertor overloading

class B{
  
public:
    int a;
    int b;
    
public:
    int add(){
        return a+b;
        
    }
    
    void operator + (B& obj){       //operator overloading
        int value1 = this->a;
        int value2 = obj.a;
        cout<<" output "<<value2- value1<<endl;;
    }
    
    void operator() (){
        cout<<"main breacket hu "<<this->a<<endl;
    }
    
    
    
};

int main() {
    
    
    B obj1;
    B obj2;
    
    obj1.a = 4;
    obj2.a = 7;
    
    obj1 + obj2;
    obj1();
    
    
    
    
    
    
    
    
    
//    A obj;
//
//    obj.sayhello("hima");
    
    return 0;
}
