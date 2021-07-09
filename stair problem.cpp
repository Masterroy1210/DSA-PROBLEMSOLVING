#include<bits/stdc++.h>
using namespace std;

int countways(int n,int dp[]){
	if(n==1)return 1;
	if(n==2)return 2;
	if(dp[n]!=-1)return dp[n];
		int count =0;
	 count+=countways(n-1,dp)+countways(n-2,dp);
	return dp[n]=count;

}



int main(){
	int n;
	cin>>n;
	int dp[n+1];
	for(int i=0;i<=n;i++)dp[i]=-1;
	int count = countways(n,dp);
	cout<<count<<endl;
	return 0;
}