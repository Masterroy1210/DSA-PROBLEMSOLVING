#include<bits/stdc++.h>
using namespace std;




int main(){
	string s;
	cin>>s;
	unordered_map<char,int>mp;
	priority_queue<int>pq;
	for(int i=0;i<s.length();i++){
		mp[s[i]]++;

	}
	for(auto it:mp){
		pq.push(it.second);
	}


	int count=0;
	while(!pq.empty()){
		int x = pq.top();
		pq.pop();
		if(pq.empty())break;

		if(pq.top()==x){
			count++;
			if(x>1){
				pq.push(x-1);
			}
		}
	}




	cout<<count<<endl;

	return 0;
}