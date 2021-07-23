#include<bits/stdc++.h>
using namespace std;

void countbridges(int node ,int par,vector<int>adj[],vector<int>&visited,vector<int>&tin,vector<int>&mini,int&time){
	visited[node]=1;
	tin[node]=mini[node]=time++;
	for(auto it:adj[node]){
		if(it==par)continue;
		if(visited[it]==0){
			countbridges(it,node,adj,visited,tin,mini,time);
			mini[node]=min(mini[node],mini[it]);
			if(mini[it]>tin[node])cout<<"bridge found"<<endl;
		}else{
			mini[node]=min(mini[node],tin[it]);
		}
	}
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
		vector<int>tin(n,0);
		vector<int>mini(n+1,0);
		int time =1;
		for(int i=0;i<=n;i++){
		if(visited[i]==0){
			countbridges(i,0,adj,visited,tin,mini,time);
		}
		}




	return 0;
}