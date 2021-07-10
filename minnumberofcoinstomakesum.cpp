#include<bits/stdc++.h>
using namespace std;


int minways(int arr[],int n,int sum){
	if(sum==0)return 0;

	int res = 1e9;
	for(int i=0;i<n;i++){
		if(arr[i]<=sum){
			int subres = minways(arr,n,sum-arr[i]);

		
		if(subres!=1e9&&subres+1<res){
			res = subres+1;
		}
	}

	}
	return res;
}


int main(){
	int n;
	cin>>n;	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum;
	cin>>sum;
	int count  = minways(arr,n,sum);
	cout<<count<<endl;
	return 0;
}