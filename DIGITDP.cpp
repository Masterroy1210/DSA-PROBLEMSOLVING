#include<bits/stdc++.h>
using namespace std;

int d,k;

int digitdp(int ind,int flag,int cnt,vector<int>&num){
	if(ind==num.size()){
		if(cnt==k)return 1;
		else return 0;
	}

	int limit =num[ind];
	if(flag==1){
		limit = 9;
	}

	int count =0;
	for(int digit=0;digit<=limit;digit++){
		if(flag==1){
			if(digit==d){
				count+=digitdp(ind+1,flag,cnt+1,num);
			}else{
				count+=digitdp(ind+1,flag,cnt,num);
			}

		}else if(flag==0){
			if(digit==d){
				if(digit<num[ind])count+=digitdp(ind+1,1,cnt+1,num);
				else count+=digitdp(ind+1,0,cnt+1,num);
			}else{
				if(digit<num[ind])count+=digitdp(ind+1,1,cnt,num);
				else count+=digitdp(ind+1,0,cnt,num);
			}

		}


	}

		return count;

}


vector<int> convertovec(int n){
	vector<int>ans;
	while(n){
		ans.push_back(n%10);
		n=n/10;
	}
	reverse(ans.begin(),ans.end());
	return ans;
}


int main(){
	int l,r;
	cin>>l>>r>>d>>k;
	vector<int>num;
	num = convertovec(r);
	int right = digitdp(0,0,0,num);

	num =convertovec(l-1);
	int left = digitdp(0,0,0,num);
	cout<<right-left<<endl;

	return 0;
}