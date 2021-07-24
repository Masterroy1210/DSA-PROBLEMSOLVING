#include<bits/stdc++.h>
using namespace std;

int findparent(int node,int parent[])
{
	if(parent[node]==node)return node;

	return parent[node]=findparent(parent[node],parent);
}
void unioun(int u,int v,int parent[],int size[]){
	int paru =findparent(u,parent);
	int parv=findparent(v,parent);

	if(size[paru]<size[parv]){
			parent[parv]=paru;
			size[parv]+=size[paru];
	}else{
		parent[paru]=parv;
		size[paru]+=size[parv];
	}
}


int main(){
	int n;
	cin>>n;
	int parent[n+1];
	int size[n+1];
	for(int i=1;i<=n;i++){
		parent[i]=i;
		size[i]=1;
	}
	int q;
    cin>>q;
    while(q--){
    	int type,u,v;
    	cin>>type>>u>>v;
    	if(type==1){
    		unioun(u,v,parent,size);
    	}else{
    		if(findparent(u,parent)==findparent(v,parent)){
    			cout<<"yes"<<endl;
    		}
    		else{
    			cout<<" NO"<<endl;
    		}
    	}
    }	
    cout<<" Printing the parent array"<<endl;
   for(int i=1;i<=n;i++){
   	cout<<parent[i]<<" ";
   }
    return 0;
}