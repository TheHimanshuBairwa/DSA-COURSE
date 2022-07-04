//
//  main.cpp
//  C++ STL Stack
//
//  Created by Himanshu Bairwa on 10/06/22.
//

#include <iostream>
#include<stack>

using namespace std;
int main() {
    
    stack <string> s;
    s.push("himanshu");
    s.push("n");
    s.push("bairwa");
    
    cout<<"top element--> "<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;;
    
    cout<<"size of stack "<<s.size()<<endl;
    
    return 0;
}
