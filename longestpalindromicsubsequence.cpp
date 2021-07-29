#include<bits/stdc++.h>
using namespace std;


int longestpalindromic(int i,int j, string s){
	if(i==j)return 1;
	if(i>j)return 0;

	if(s[i]==s[j])return 2+longestpalindromic(i+1,j-1,s);

	return max(longestpalindromic(i+1,j,s),longestpalindromic(i,j-1,s));
}




int main(){
	string s;
	cin>>s;
	int n = s.length();

	cout<<longestpalindromic(0,n,s);
	return 0;
}