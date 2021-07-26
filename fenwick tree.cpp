#include<bits/stdc++.h>
using namespace std;

void updatefenwick(int ind,int data,int fen[],int n){
	while(ind<=n){
		fen[ind]+=data;
		ind+=ind&(-ind);
	}
}

int getrangesum(int ind,int fen[]){
	int sum=0;
	while(ind>0){
		sum+=fen[ind];
		ind-=ind&(-ind);
	}
	return sum;
}


int main(){
	int n;
	cin>>n;
	int arr[n+1]={0};
	int fen[n+1]={0};
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		updatefenwick(i,arr[i],fen,n);
		cout<<"fenwick update successfully"<<endl;

	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<getrangesum(r,fen)-getrangesum(l-1,fen)<<endl;
	}
	return 0;
}