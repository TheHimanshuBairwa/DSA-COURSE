//
//  main.cpp
//  lecture 19 STL c++
//
//  Created by Himanshu Bairwa on 10/06/22.
//

#include <iostream>
#include<array>



using namespace std;
int main() {
   
    array<int,4> a = {1,2,3,4};
    
    int size = a.size();
    
    for(int i=0;i<size; i++){
        cout<<a[i]<<endl;
    }
    
    cout<<" element at index 2: "<< a.at(2)<<endl;    // accessing array elements
    cout<<" empty or not: "<< a.empty()<<endl;          // checkig array whether it is empty or not
    
    cout<<" first element of array --> "<<a.front()<<endl;
    cout<<" last element of array --> "<<a.back()<<endl;
    
    
    
    
    return 0;
}
