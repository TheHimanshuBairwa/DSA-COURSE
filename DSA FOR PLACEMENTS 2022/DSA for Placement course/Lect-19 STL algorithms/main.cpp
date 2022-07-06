//
//  main.cpp
//  STL algorithms
//
//  Created by Himanshu Bairwa on 10/06/22.
//

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {
    
    vector<int> v;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    
    cout<<binary_search(v.begin(),v.end(),6)<<endl;     //  code for binary search algorithm
    
    
    cout<<"index of 6 in vector is-->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;   // used to find of index of element using binary search
    
    cout<<"index of 6 in vector is-->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    
    int a = 3;
    int b = 4;
    
    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<"a after swapping--> "<<a<<endl;
    
    
    string s = "abcdefg";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
    
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotating"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"before sort"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    sort(v.begin(),v.end());
    cout<<"after sort"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
   
    return 0;
}
