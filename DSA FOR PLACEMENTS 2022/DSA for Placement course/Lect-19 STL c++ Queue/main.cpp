//
//  main.cpp
//  C++ STL Queue
//
//  Created by Himanshu Bairwa on 10/06/22.
//

#include <iostream>
#include<queue>

using namespace std;
int main() {
   
    queue<string> q;
    q.push("him");
    q.push("an");
    q.push("shu");
    
    cout<<"first element of queue--> "<<q.front()<<endl;
    q.pop();
    cout<<"first element of queue--> "<<q.front()<<endl;
    

    
    
    return 0;
}
