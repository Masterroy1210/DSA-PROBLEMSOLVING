#include<bits/stdc++.h>
using namespace std;
int findparent(int node,int parent[]){
	if(parent[node]==node)return node;

	return parent[node] = findparent(parent[node],parent);
}

void unioun(int u,int v,int parent[],int size[]){
	int parentu = findparent(u,parent);
	int parentv = findparent(v,parent);
	if(size[parentu]<size[parentv]){
		parent[parentv]=parentu;
		size[parentv]+=size[parentu];
	}else{
		parent[parentu]=parentv;
		size[parentu]+=size[parentv];
	}
}



int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,pair<int,int>>>edges;
	for(int i=0;i<m;i++){
		int w,u,v;
		cin>>w>>u>>v;
		edges.push_back({w,{u,v}});
	}
	sort(edges.begin(),edges.end());
	vector<pair<int,int>>mst;
	int parent[n+1];
	int size[n+1];
	int sum=0;
	for(int i=1;i<=n;i++){
		parent[i]=i;
		size[i]=1;

	}
	for(auto it:edges){
		int wt = it.first;
		int newu = it.second.first;
		int newv = it.second.second;
		if(findparent(newu,parent)!=findparent(newv,parent)){
			mst.push_back({newu,newv});
			sum+=wt;
			unioun(newu,newv,parent,size);
		}
	}
		for(auto it:mst){
			cout<<it.first<<" "<<it.second<<endl;
			
		}
		cout<<sum<<endl;
		return 0;
}