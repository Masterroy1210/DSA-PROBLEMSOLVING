#include<bits/stdc++.h>
using namespace std;


void getmaxmeeting(int start[],int end[],int n){
	vector<pair<int,pair<int,int>>>table;

	for(int i=0;i<n;i++){
		pair<int,pair<int,int>>pr;
		pr.first=end[i];
		pr.second.first=start[i];
		pr.second.second=i+1;
		table.push_back(pr);
	}

	sort(table.begin(),table.end());
	vector<int>ans;
	ans.push_back(table[0].second.second);
	int timelimit =  table[0].second.second;
	for(int i=1;i<n;i++){
		if(table[i].second.first>timelimit){
			ans.push_back(table[i].second.second);
			timelimit = table[i].first;
		}

	}
	for(auto it:ans){
		cout<<it<<" ";
	}
}



int main(){
	int n;
	cin>>n;
	int start[n],end[n];
	for(int i=0;i<n;i++){
		cin>>start[i];
	}
	for(int i=0;i<n;i++){
		cin>>end[i];
	}

	getmaxmeeting(start,end,n);




	return 0;
}


