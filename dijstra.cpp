#include<bits/stdc++.h>
using namespace std;




int main(){
	int  n ,m;
	cin>>n>>m;
	vector<pair<int,int>>adj[n+1];
	for(int i =0;i<m;i++){
		int u,v,wt;
		cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});

	}
	priority_queue<pair<int,int>>pq;
	pq.push({0,1});
	vector<int>dist(n+1,1e9);
	dist[1]=0;
	while(!pq.empty()){
		auto it = pq.top();
		pq.pop();
		int node = it.second;
		int wt = it.first*-1;

		for(auto itt :adj[node]){
			int next = itt.first;
			int nextwt = itt.second;
			if(dist[next]>dist[node]+nextwt){
				dist[next] = dist[node]+nextwt;
				pq.push({-1*dist[next],next});
			}
		}
	}
	for(int i =1;i<n;i++){
		cout<<i<<" ->  "<<dist[i]<<endl;

	}
	return 0;
}