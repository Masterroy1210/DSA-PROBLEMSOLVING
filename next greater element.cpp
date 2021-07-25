#include<bits/stdc++.h>
using namespace std;




int main(){
	int n;
	cin>>n;
	int arr[n];
	int nge[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	stack<int>st;
	for(int i=2*n-1;i>=0;i--){
		while(!st.empty()&&st.top()<arr[i%n]){
			st.pop();

		}
		if(st.empty()){
			nge[i%n]=-1;
		}else{
			nge[i%n]=st.top();
		}
		st.push(arr[i%n]);
	}

	for(int i=0;i<n;i++){
		cout<<nge[i]<<" ";
	}




return 0;
}