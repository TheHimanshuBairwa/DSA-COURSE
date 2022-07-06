//
//  main.cpp
//  lecture 22 string and char arrays
//
//  Created by Himanshu Bairwa on 13/06/22.
//

#include <iostream>
using namespace std;

char uppertolower(char ch){
    
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
        }
}

bool checkpalindrome(char str[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(uppertolower(str[s])!=uppertolower(str[e])){
            return 0;
        }else{
            s++;
            e--;
         
        }
    }return 1;
}


// FUNCTION FOR REVERSING OF STRING

void reverse(char name[], int n){
    
    int s= 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}








// FUNCTION TO CALCULATE THE LENGTH OF CHAR ARRAY

int getlength(char name[]){         // no need to give size of array
    int count = 0;
    for(int i = 0; name[i]!='\0';i++)
        count++;

    return count;
}

char maxoccurencechar(string s){
    
    int arr[26] = {0};
    int number = 0;
    for(int i = 0; i<s.length(); i++){
        //lowercase vala
        char ch = s[i];
        if(s[i]>='a' && s[i]<='z'){
            number = ch - 'a';
            
        }
        // uppercase vala
        else{
            number = ch - 'A';
            
        }arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for(int i =0; i<s.length();i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}






int main() {
//
//    char name[20];
//    cout<<"enter the name for length calcualtion: ";
//    cin>>name;
//    int len = getlength(name);
//    cout<<"length of character array is: "<<len<<endl;
//    reverse(name,len);
//    cout<<"my name is : "<<name<<endl;
//
//    cout<< "palindrome: "<<checkpalindrome(name, len)<<endl;
   
    
    
    string s;
    cin>>s;
    cout<<maxoccurencechar(s)<<endl;
    
    
    return 0;
}