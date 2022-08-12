//
//  main.cpp
//  Lect-42 Scrambled String Memoized
//
//  Created by Himanshu Bairwa on 13/08/22.
//




/*
 SCRAMBLED STRING
 */
 
 #include<iostream>
 #include<unordered_map>
#include<map>
 using namespace std;

 unordered_map<string,bool> mp;
 
 bool isScrambled(string a, string b){
     if(a.length() != b.length()){
         return false;
     }
     if(a.length() == 0){
         return true;
     }
     if(a.compare(b) == 0){
         return true;
     }
     if(a.length()<=1){
         return false;
     }
 
 string key = "a";
      key.push_back(' ');
      key.append("b");
      if(mp.find(key) != mp.end()){
          return mp[key];
      }
 
     int n = a.length();
     bool flag = false;
     for(int i=1; i<=n-1; i++){
         bool cond1_1 = isScrambled(a.substr(0,i),b.substr(n-i,i));
         bool cond1_2 = isScrambled(a.substr(i,n-i),b.substr(0,n-i));
         bool cond1 = cond1_1&cond1_2;

         bool cond2_1 = isScrambled(a.substr(0,i),b.substr(0,i));
         bool cond2_2 = isScrambled(a.substr(i,n-i),b.substr(i,n-i));
         bool cond2 = cond2_1&cond2_2;

         if(cond1 || cond2){
             flag = true;
             break;
         }
     }
     return mp[key] = flag;
 }
 int main(){
     string a = "great";
     string b ="rgeat";
     cout<<isScrambled(a,b);
 }

 
 
 
 

