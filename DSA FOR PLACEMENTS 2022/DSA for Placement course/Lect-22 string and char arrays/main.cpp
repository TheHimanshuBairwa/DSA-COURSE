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

/*

Question: Reverse words in given string

link: https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

code: 


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
          // code here 

        string res;

        stack<string> s;

        for(int i=0;i<S.length();i++)

        {

            if(S[i]!='.')

                res+=S[i];

            else 

            {

                s.push(res);

                res.clear();

            }

        }

        s.push(res);

        res.clear();

        while(s.size()>1)

        {

            res+=s.top();

            res+='.';

            s.pop();

        }

        res+=s.top();

        s.pop();

        return res;
    } 
};
*/

/*
Question 6 : Maximum Occuring Character in string

link: https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

code: 

class Solution
{
    public:
    
    char getMaxOccuringChar(string str)
    {
        int arr[26] = {0};
        int number = 0;
        for(int i = 0; i<str.length(); i++){
        //lowercase vala
        char ch = str[i];
        if(str[i]>='a' && str[i]<='z'){
            number = ch - 'a';
            
        }
        // uppercase vala
        else{
            number = ch - 'A';
            
        }arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for(int i =0; i<26;i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

};
*/

/*
Question -7 Remove spaces by some sting

link: https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172


code:  

string replaceSpaces(string &str){
	string temp = "";
    for(int i =0; i< str.length(); i++){

    if(str[i] == ' '){

        temp.push_back('@');
        temp.push_back('4');
        temp.push_back('0');
    }else
        temp.push_back( str[i]);
    
    }
    return temp;
}
*/


/*
Question 8 : Remove all occurrence of substring

link: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

code: 

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.length()!=0 && s.find(part)<s.length()){

        s.erase(s.find(part),part.length());
        }
        
        return s;
    }
};
*/

/*
Question 9 : Permutation in String
link: https://leetcode.com/problems/permutation-in-string/

code: 

class Solution {
private: 
    bool checkequal(int a[26],int b[26]){
        for(int i = 0; i < 26 ; i++ ) {
            if(a[i] != b[i]){
                return 0;
            }
            
        }return 1;
    }
    
    public:
    bool checkInclusion(string s1, string s2) {
        
        // character count array
        int count1[26] = {0};
        for(int i = 0; i< s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }
        
        //traverse in s2 string with window size s1 length and compare
        
        int i = 0;
        int windowsize = s1.length();
        int count2[26] = {0};

        //running for first window
        while(i < windowsize && i < s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
            
        }
        if (checkequal(count1,count2)) {
            return 1;
        }
        
        //aage window process karo
        
        while(i < s2.length()) {
            char newchar = s2[i];
            int index = newchar - 'a';
            count2[index]++;
            
            char oldchar = s2[i - windowsize];
            index = oldchar - 'a';
            count2[index]--;
            i++;
            
            if (checkequal(count1,count2)) {
            return 1;
                
        }
        

        }
        return 0;
    }
};

*/

/*
Question 10 : Remove all adjacent duplicates

link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

code: 

class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans = "";
        for(int i = 0 ;i<s.length(); i++){
            if(!ans.empty() && ans.back() == s[i])
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        return ans;
        
        
        
        // // // // // // // // // // // // // // // // // // // 
        string res = "";
        for (char c : s) {
            if (!res.empty() && res.back() == c) {
                res.pop_back();
            } else {
                res.push_back(c);
            }
        }
        return res;
	
	// // // // // // // // // // // // // // // // // // // 
        
    }
};

*/

/*

Question 11: String Compression
link: https://leetcode.com/problems/string-compression/

code: 

class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0;
        int ansindex = 0;
        int n = chars.size();
        
        while(i<n)
        {
        int j =i+1;
        while(j<n && chars[i] == chars[j]) {
            j++;
        }
            // yaha kab aoge
            //ya to vector pura traverse kar lia ho
            // ya to koi naya character encounter kiya ho
            
            
            //old char store kara llo
            chars[ansindex++] = chars[i];
            
            int count = j-i;
            
            if(count>1){
                //converting count in single digit char number and saving in ans
                
                string cnt = to_string(count);
                for(char ch : cnt){
                    chars[ansindex++] = ch;
                }
                // moving to new character
            } i = j;
        }
        return ansindex;
    }
};

*/


