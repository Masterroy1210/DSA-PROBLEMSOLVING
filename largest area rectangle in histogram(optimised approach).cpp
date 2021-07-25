#include<bits/stdc++.h>
using namespace std;





int main(){
	int n;
	cin>>n;
	int height[n];
	for(int i=0;i<n;i++){
		cin>>height[i];
	}
	int left[n];
	int right[n];
	stack<int>st;
	for(int i=0;i<n;i++){
		while(!st.empty()&&height[st.top()]>=height[i]){
			st.pop();
		}
		if(st.empty())left[i]=0;
		else{
			left[i] = st.top()+1;
		}
		st.push(i);
	}
	while(!st.empty())st.pop();
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&&height[st.top()]>=height[i]){
			st.pop();

		}
		if(st.empty())right[i]=n-1;
		else{
			right[i]=st.top()-1;
		}
		st.push(i);
	}
	int maxA = 0;
	for(int i=0;i<n;i++){
		maxA = max(maxA,(right[i]-left[i]+1)*height[i]);
	}
	cout<<maxA<<endl;
	return 0;
}