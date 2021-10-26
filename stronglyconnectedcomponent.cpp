#include<bits/stdc++.h>
using namespace std;

void toposort(int node,vector<int>adj[],stack<int>&st,vector<int>&visited){
	visited[node]=1;

	for(auto it:adj[node]){
		if(visited[it]==0){
			toposort(it,adj,st,visited);
		}
	}
	st.push(node);
}

void dfs(int node ,vector<int>transpose[],vector<int>&visited){
	visited[node]=1;
	cout<<node<<" ";
	for(auto it:transpose[node]){
		if(visited[it]==0){
			dfs(it,transpose,visited);
		}
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<int>adj[n+1];

	for(int i =0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}
	vector<int>visited(n+1,0);
	stack<int>st;
	for(int i =0;i<n;i++){
		if(visited[i]==0){
			toposort(1,adj,st,visited);		
		}
	}
	
	cout<<"toposort done"<<endl;

	vector<int>transpose[n+1];
	for(int i=0;i<n;i++){
		visited[i]=0;
		for(auto it:adj[i]){
			transpose[it].push_back(i);
		}
	}

	while(!st.empty()){
		int node  = st.top();
		st.pop();
		
		if(visited[node]==0){
			cout<<"SCC->";
			dfs(node,transpose,visited);
				cout<<endl;
		}
	
	}
	return 0;
}