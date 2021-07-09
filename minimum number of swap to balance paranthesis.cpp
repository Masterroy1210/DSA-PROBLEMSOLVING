#include<bits/stdc++.h>
using namespace std;




int main(){
	string s;
	cin>>s;
	int n = s.length();
	int left =0,right=0,swap=0,imbalance =0;
	for(int i=0;i<n;i++){
		if(s[i]=='['){
			left++;
			if(imbalance>0){
				swap+=imbalance;
				imbalance--;
			}
		}
		if(s[i]==']'){
			right++;
			imbalance = right-left;
		}
	}
	cout<<" total swap required are "<<swap;
	return 0;
}