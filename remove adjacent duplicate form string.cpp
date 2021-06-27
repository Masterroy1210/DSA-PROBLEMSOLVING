#include<iostream>
#include<string>
#include<stack>
using namespace std;




int main(){
	string s;
	cin>>s;
	stack<char>st;
	for(int i=0;i<s.length();i++){
		if(st.empty()) st.push(s[i]);
		else{
			if(s[i]==st.top()){
				st.pop();

			}else{
				st.push(s[i]);
			}
		}
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}