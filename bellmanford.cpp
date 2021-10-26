#include<bits/stdc++.h>
using namespace std;




int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>>adj[n+1];
	for(int i=0;i<n;i++){
		int u,v,wt;
		cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
	}
	vector<int>dist(n,10000);
	dist[0]=0;
	for(int i=0;i<n-1;i++){
		for(int j =0;j<n;j++){
			for(auto it:adj[j]){
				int u  = j;
				int v = it.first;
				int wt = it.second;
				if(dist[u]+wt<dist[v]){
					dist[v] = dist[u]+wt;
			}	
		}
			
	}
	for(auto it :dist){
		cout<<it<<" ";
	}
	cout<<endl;
}

	int flag=0;
	for(int i=0;i<n;i++){
		for(auto it:adj[i]){
			int u=i;
			int v = it.first;
			int wt = it.second;
			if(dist[u]+wt<dist[v]){
			cout<<"Negative cycle detected"<<endl;
			flag = 1;
			break;

		}		
		}
		
	}

	if(flag==0){
		for(int i =0;i<n;i++){
			cout<<i<<" ---> "<<dist[i]<<endl;
		}
	}
	return 0;
}