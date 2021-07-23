#include<bits/stdc++.h>
using namespace std;


void shortestpath(vector<pair<int,int>>adj[],int n){
	priority_queue<pair<int,int>>pq;
	vector<int>mindist(n+1,1e9);
	vector<int>par(n+1,0);
	pq.push({0,1});
	while(!pq.empty()){
		int node = pq.top().second;
		int dist =-1*pq.top().first;
		pq.pop();
		for(auto it:adj[node]){
			int child = it.first;
			int wt = it.second;
			if(dist+wt<mindist[child]){
				mindist[child]=wt+dist;
				par[child]=node;
				pq.push({-1*(wt+dist),child});
			}
		}
	}
	vector<int>path;
	path.push_back(n);
	int lastnode = n;
	while(lastnode!=1){
		lastnode=par[lastnode];
		
		path.push_back(lastnode);	
		
	}
	reverse(path.begin(),path.end());
	for(auto it:path){
		cout<<it<<" ";
	}
}


int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>>adj[n+1];
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});

	}
	shortestpath(adj,n);
	return 0;

}