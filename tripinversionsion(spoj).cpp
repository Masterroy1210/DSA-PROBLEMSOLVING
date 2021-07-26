#include<bits/stdc++.h>
using namespace std;

class fenwick{
public:
	int n;
	fenwick(int no){
		n=no;
	}



	void updatefenwick(int ind,int data,int fen[],int n){
		while(ind<=n){
			fen[ind]+=data;
			ind += ind&(-ind);
		}
	}

	int getsum(int ind,int fen[]){
		int sum=0;
		while(ind>0){
			sum+=fen[ind];
			ind -=ind&(-ind);
		}
		return sum;
	}

};



int main(){
	int n;
	cin>>n;
	int arr[n+1];
	fenwick left(n);
	fenwick right(n);
	int fenwickleft[n+1]={0};
	int fenwickright[n+1]={0};
	unordered_map<int,int>mpleft;
	unordered_map<int,int>mpright;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		mpright[arr[i]]++;
		right.updatefenwick(arr[i],1,fenwickright,n);
	}
	int triplets=0;	
	for(int i=1;i<=n;i++){
		mpright[arr[i]]--;
		right.updatefenwick(arr[i],-1,fenwickright,n);
		mpleft[arr[i]]++;
		left.updatefenwick(arr[i],1,fenwickleft,n);
		int leftsum = left.getsum(n,fenwickleft)-left.getsum(arr[i],fenwickleft);
		int rightsum = right.getsum(arr[i]-1,fenwickright);
		triplets+=leftsum*rightsum;

	}
	cout<<triplets<<endl;
	return 0;

}