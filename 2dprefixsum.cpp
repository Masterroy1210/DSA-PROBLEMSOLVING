#include<bits/stdc++.h>
using namespace std;




int main(){
	int n ;
	cin>>n;
	int k ;
	cin>>k;
	vector<vector<int>>matrix(n,vector<int>(n,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
	}

	vector<vector<int>>prefix(n,vector<int>(n,0));
	prefix[0][0] =matrix[0][0];
	for(int i=1;i<n;i++){
		prefix[i][0] = matrix[i][0]+prefix[i-1][0];

	}
	for(int j=1;j<n;j++){
		prefix[0][j] = matrix[0][j]+prefix[0][j-1];
	}

	for(int i = 1;i<n;i++){
		for(int j=1;j<n;j++){
			prefix[i][j] = matrix[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
		}
	}

	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<prefix[i][j]<<" ";
		}
		cout<<endl;
	}

	int ans = INT_MIN;
	for(int i=k-1;i<n;i++){
		for(int j=k-1;j<n;j++){
		int sum = prefix[i][j];
		if(i-k>=0)sum-=prefix[i-k][j];
		if(j-k>=0)sum-=prefix[i][j-k];
		if(i-k>=0&&j-k>=0)sum+=prefix[i-k][j-k];
		ans = max(ans,sum);
		}

	}
	cout<<ans<<endl;
	return 0;
}