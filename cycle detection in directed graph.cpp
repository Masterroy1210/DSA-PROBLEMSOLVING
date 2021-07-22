#include<bits/stdc++.h>
using namespace std;

bool detectcycle(int node ,int par,vector<int>adj[],vector<int>&visited,vector<int>&pathvisited){

	visited[node]=pathvisited[node]=1;
	for(auto it:adj[node]){
		if(visited[it]==0){
			if(detectcycle(it,node,adj,visited,pathvisited)==true)return true;
		}else if(pathvisited[it]==1){
			return true;
		}
	}



	pathvisited[node]=0;
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

	}
	vector<int>visited(n+1,0);
	vector<int>pathvisited(n+1,0);
	bool flag = false;
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			flag =flag||detectcycle(i,0,adj,visited,pathvisited);
		}
		if(flag){
			cout<<"Cycle detected in the graph"<<endl;
			break;
		}
	}
	if(!flag)cout<<"No cycle in the graph"<<endl;
	return 0;
}