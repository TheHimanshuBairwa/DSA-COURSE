#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(string s1, string s2, int m, int n, vector<vector<int>> t){

	if(n==0 || m==0){
		return 0;
	}
	if(t[m][n] != -1){
		return t[m][n];
	}

	if(s1[m-1] == s2[n-1]){
		return t[m][n] = 1 + solve(s1,s2,m-1,n-1,t);
	}
	else{
		return t[m][n] = max(solve(s1,s2,m-1,n,t), solve(s1,s2,m,n-1,t));
	}
}
int lcs(string s1, string s2){
	int m = s1.length();
	int n = s2.length();

	vector<vector<int>> t(m+1,vector<int>(n+1,-1));
	return solve(s1,s2,m,n,t);
}

int main(){

	string s1 = "abcf";
	string s2 = "abcdef";
	

	cout<<lcs(s1,s2);
}