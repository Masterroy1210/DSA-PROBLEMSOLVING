#include<bits/stdc++.h>
using namespace std;

void superdigit(string st){
	if(st.length()==1){
		cout<<st;
		return ;
	}
	int sum =0;
	for(int i=0;i<st.length();i++){
		sum = sum+st[i]-'0';

	}
	string s = to_string(sum);
	superdigit(s);
}


int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	string st;
	for(int i=0;i<k;i++){
		st+=s;
	}
	superdigit(st);


}