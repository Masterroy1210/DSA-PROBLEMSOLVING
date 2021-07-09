#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
		vector<pair<int,int>>vec(n);
	for(int i=0;i<n;i++){
		vec[i].first = arr[i];
		vec[i].second =i;

	}
	sort(vec.begin(),vec.end());

	int ans =0;
	for(int i=0;i<n;i++){
		if(vec[i].second ==i)continue;
		else {
			swap(vec[i].first,vec[vec[i].second].first);
			swap(vec[i].second,vec[vec[i].second].second);

		}



		if(i!=vec[i].second)--i;

		ans++;

	}


	cout<<"Minimum swaps required to sort the array is"<<ans;
return 0;
}