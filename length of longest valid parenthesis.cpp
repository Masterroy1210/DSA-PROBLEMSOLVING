#include<bits/stdc++.h>
using namespace std;




int main(){
	string s;
	cin>>s;
	int i=0;
	stack<int>st;
	int curr=0,ans=0;
	while(i<s.length()){
		if(s[i]=='('){
			st.push(curr);
			curr=0;
		}else{
			if(st.empty())curr=0;
			else{
				curr = curr+st.top()+2;
				ans = max(ans,curr);
				st.pop();
			}
		}
		i++;
	}
	cout<<ans<<endl;
	return 0;

}
