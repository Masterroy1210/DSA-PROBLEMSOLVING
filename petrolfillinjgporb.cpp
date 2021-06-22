#include<iostream>
#include<algorithm>
using namespace std;




int main(){
	int n;
	cin>>n;
	int petrol[n];
	int dist[n];
	for(int i=0;i<n;i++){
		cin>>petrol[i];
	}
	for(int i=0;i<n;i++){
		cin>>dist[i];
	}


	int start=0;
	int sum=0;
	int diff=0;
	for(int i=0;i<n;i++){
		sum = sum+petrol[i]-dist[i];
		if(sum<0){
			start = i+1;
			diff = diff+sum;
			sum=0;

		}
	}
	if(sum+diff>=0)cout<<" The starting petrol station is "<<start+1<<endl;
	else cout<<" NO starting station possible"<<endl;
	return 0;
}