#include<iostream>
#include<stack>
using namespace std;



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	int span[n];
	span[0]=1;
	stack<int>st;
	st.push(0);
	for(int i=1;i<n;i++)
	{
		while(arr[i]>=arr[st.top()]) st.pop();
		if(!st.empty()) span[i]=i-st.top();
		else{
			span[i]=i+1;
		}
		st.push(i);
	}
	for(int i=0;i<n;i++){
		cout<<span[i]<<" ";

	}
	return 0;
}