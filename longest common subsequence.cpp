#include<bits/stdc++.h>
using namespace std;


int lcs(int i,int j,string s1,string s2,vector<vector<int>>&dp){
	if(i>=s1.size()||j>=s2.size())return 0;
	if(dp[i][j]!=-1)return dp[i][j];

	if(s1[i]==s2[j]){
		return dp[i][j]=1+lcs(i+1,j+1,s1,s2,dp);
	}else{
		int left = lcs(i+1,j,s1,s2,dp);
		int right= lcs(i,j+1,s1,s2,dp);
		return dp[i][j]=max(left,right);
	}

}


int main(){
	string s1,s2;
	cin>>s1>>s2;
	vector<vector<int>>	dp(1000,vector<int>(1000,-1));
	cout<<lcs(0,0,s1,s2,dp);
	return 0;

}