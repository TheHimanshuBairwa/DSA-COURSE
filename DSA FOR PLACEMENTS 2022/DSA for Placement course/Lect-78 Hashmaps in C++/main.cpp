//
//  main.cpp
//  Lect-78 Hashmaps in C++
//
//  Created by Himanshu Bairwa on 07/07/22.
//

#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
   
/*   creation of map     */
    
//    unordered_map<string,int> m;
    map<string,int> m;
    
    
/*    insertion in map   */
    
    // type 1 of insertion
    pair<string,int> pair1 = make_pair("himanshu", 3);
    m.insert(pair1);
    
    // type 2
    pair<string,int> pair2("bairwa",5);
    m.insert(pair2);
    
    // type 3
    
    // map hamesha unique key ke liye entry store karta hai so jab bi kisi ka frequency chaiye hoto map is good option to use
    m["mera"] = 1;          // single time entery ke liye new box banta hai
    m["mera"] = 2;          // dubara entry ke liye updation hoti hai
    
     
/*  Searching  in map  */
    
    cout<<m["mera"]<<endl;
    cout<<m["himanshu"]<<endl;
    cout<<m.at("bairwa")<<endl;
    
//    cout<<m.at("unknownKey")<<endl;     // this will search key in map
    cout<<m["unknownKey"]<<endl;        // this will create a new entry of unknowKey and assign it with 0 value;
    cout<<m.at("unknownKey")<<endl;
    
    
/*    Size of Map    */
    cout<<m.size()<<endl;
    
    
/*    Count for finding whether the key is present or not    */
    cout<<m.count("bairwa")<<endl;
    cout<<m.count("bro")<<endl;
    
    
    
/*    Erase a value in map    */
    m.erase("mera");
    cout<<m.size()<<endl;
    
/*      TRAVERSING THE FULL MAP
 printing all the elements of map    */
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    
/*   for traverse using the iterator    */
    
    map<string,int> :: iterator it = m.begin();
    
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    
    
    
    
    
    return 0;
}




/*
 Question: Maximum Frequency Number   ( use of maps )
 
 
 LINK-->   https://www.codingninjas.com/codestudio/problems/maximum-frequency-number_920319
 
 CODE-->
 
 int maximumFrequency(vector<int> &arr, int n)
 {
     unordered_map<int,int> count;
     int maxFreq = 0;
     int maxAns = 0;
     for(int i = 0; i<arr.size(); i++){
         count[arr[i]]++;
         maxFreq = max(maxFreq,count[arr[i]]);
     }
     
     int maxi = INT_MIN;
     int ans = -1;
     
     // code for finding first maximum occuring high freq element
    for(int i = 0; i<n; i++){
        if(maxFreq == count[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }
     
     return maxAns;
     
 }
 
 
 
 */
