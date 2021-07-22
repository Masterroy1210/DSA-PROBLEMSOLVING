#include<bits/stdc++.h>
using namespace std;

void dfs(int node ,int par,vector<int>adj[],vector<int>&visited,stack<int>&st){
	visited[node]=1;
	for(auto it:adj[node]){
		if(visited[it]==0){
			visited[it]=1;
			dfs(it,node,adj,visited,st);
		}
	}
	st.push(node);

}



int main(){
	int n;
	cin>>n;
	vector<int>adj[n+1];
	int no;
	cin>>no;
	for(int i=0;i<no;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}
	stack<int>st;
	vector<int>visited(n+1,0);
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			dfs(i,0,adj,visited,st);
		}
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}