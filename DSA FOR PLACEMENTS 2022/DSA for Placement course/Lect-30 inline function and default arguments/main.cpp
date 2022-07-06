//
//  main.cpp
//  lect-30 inline function and default arguments
//
//  Created by Himanshu Bairwa on 18/06/22.
//

#include <iostream>
using namespace std;

/*
inline int getmax(int& a,int& b){
    return (a>b) ? a:b;
}
*/




void printarray(int arr[],int n,int start = 0){             //int start = 0 dene se vo default argument ban gaya agar start kuch nai doge to vo zero                                                          // lega
    for(int i = start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}


int main() {
  /* INLINE FUCNTIONS
    int a = 5;
    int b = 3;
    cout<<a<<" "<<b<<endl;
    cout<<getmax(a,b)<<endl;        // because of inline function getmax(a,b) ki jagah par " (a>b) ? a:b " aa jayega
                                    // to fayda ye hoga ki function extra memory bi nai le raha aur function call marne ki bi zarurt nai hai
    a = a-3;
    b = b+4;
    cout<<a<<" "<<b<<endl;
    cout<<getmax(a,b)<<endl;
   */
   
    
    // DEFAULT ARGS OR ARGUMENTS
    
    
    
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    printarray(arr,size);
    
    
    
    
    
   
   return 0;
   
}
