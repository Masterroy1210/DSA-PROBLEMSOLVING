#include<bits/stdc++.h>
using namespace std;


bool dfs(int node,int par,vector<int>adj[],vector<int>&visited){
		visited[node]=1;
		for(auto it : adj[node]){
			if(visited[it]==0){
				if(dfs(it,node,adj,visited)==true)return true;
			}else if(it!=par) return true;
		}
		return false;
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
		adj[v].push_back(u);
	}
	vector<int>visited(n+1,0);
	bool res = dfs(1,0,adj,visited);
	if(res)cout<<"Cycle present in the array"<<endl;
	else{
		cout<<"No cyclce present in the array"<<endl;
	}
	return 0;
}